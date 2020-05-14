#include "status_handler.h"
#include "../connection.h"
#include <boost/log/trivial.hpp>

namespace Front::Protocol {

StatusHandler::StatusHandler() {}

void StatusHandler::handle(Connection &conn, MineNet::Message::Reader &r) {
   uint8_t op = r.read_byte();
   BOOST_LOG_TRIVIAL(debug) << "[status] handling status op = " << (int)op;
   switch (op) {
   case 0:
      handle_info(conn);
      break;
   case 1:
      handle_ping(conn, r);
      break;
   default:
      BOOST_LOG_TRIVIAL(info) << "[status] invalid op code " << (int)op;
   }
}

const char *favicon =
    "iVBORw0KGgoAAAANSUhEUgAAAEAAAABACAYAAACqaXHeAAAdCnpUWHRSYXcgcHJvZmlsZSB0eX"
    "Bl"
    "IGV4aWYAAHjapZppluQ4coT/4xQ6ArEDx8H6nm6g4+szJ7Oqeno0Gj11duUSwSABd3NzMwDu/"
    "Nd/"
    "Xvcf/FefXFzKtZVeysN/qaceBr+05/1v2Hf/JPtu/6XvLf7+y+vu1xuBlyI/4/tnK9/"
    "rh9cD14fv"
    "9fXdZ/B6/uNG/XxvzL++Mb4bhfY94Hv950HRvw949nej8d0ohu/J3xDn9+TSW/"
    "1zCvtnBu17pb3/"
    "nL6lWEPJxdfE9xSeWkvn9xaeVInb1kDvCl2fy/O9zz/+7X4uDYwpnOjjY9/bO8r4/hv8y/"
    "a9c53n"
    "a/B3f1+3+D6OlDEERt6/2J7nVzT/Epufn//Df+7fmdYHh7+k+9dvHwzc3974BxiU870e/"
    "yF75ddP"
    "e9394xs+//N0W07/GFFNvx4c/jIin/34y6Tb73/37nbveWc3UmHK5ZvUz0y8s1TePQUC+1jhq/"
    "Iv"
    "83u1r85Xo1wWGNvPeiZfy3cfSPH1yW8//HX+2C/LL8aYwgmVnyGsEO21Ri56WFFJT/"
    "ryN1QSv2MD"
    "GAuoRF4N97pvLN6e2+15yzeevD2XBs/NPB/5X7/cv3PRv/"
    "q6V7Xkvftqxr8JDipDhqHM6TuXkRF/"
    "v6BmC/DP118B+SU2ksJsYW5McDzzvcXM/je2oiU6cl3m51vcvu7387pR4tmZwVBDyT/"
    "Fx+yLf2oI"
    "1XsC2UjQ8E8LMYVJBnzOYTPIkGIs5IYi4NGOz1Rv14Yc3tdhSTKRY4mV3FCaJCulDH5qamBo5J"
    "hT"
    "zrnkmlvueZRYkqPCSqlFdDtqrKnmWmqtrfY6Wmyp5VZaba31NnroETbOnXLsrfc+"
    "Bs8c3HkUN7h+"
    "8MoMM8408yyzzjb7HAv4rLTyKquutvoaO+"
    "y4qeNddt1t9z2OP0DppJPdKaeedvoZF6zdeNPNt9x6"
    "2+13/Mral9W/ff0fsua/"
    "rAXLlK6rv7LGq7W+P53hhZsoZ2QsJKr3qcoAgA7K2dN8SkGZU86eHqiK"
    "HBhkVm62f4YvIbmYjg/5+l+5+525/1PeXEn/Mm/h382cU+r+n5mzvLmT/"
    "8jbP8naFt0ty9hbhYrp"
    "E6m+6/nkzr6XW8Z0cUa/D4SUy9NuDqk1YllHatO3U28ajfgx2T5mjM/"
    "eDLaExgifdtoa7T60rxtd"
    "PT2H0ffso1Baj27/dCbZWp5+g+5wZz0zh8k7/"
    "ZTY9kx5jUy9rkZi+9ppLIitMhryA9elFUr3aZJt"
    "BtRX5ZXdD7PdOxX9RUYeelTr1/cTlI/"
    "YTrwqkSe2UcLcvcOxhZHPNpRAkr7m4vp15yYrDXjcPplq"
    "j2lD3bXuyU1iH7X5NhyvM9ZZRn545FlArxCEm8qcNa6d8+"
    "glzwZVU0KnxnMz7Zg775B2WSGT1jyn"
    "uwT1tgxrEva4b8ySXeve554JGxVwQyziWfse/u/0477yQzpn3CCk+lROBpAg/"
    "5lz7jG4ImrqQIrU"
    "5DTGJpA5phKfDvJL3vuueMeO9ex4zyIJxG0Ro+HOKD237YmqLtVQHg0m+"
    "40oBE6D5wP0OmhRpxTa"
    "S7jtgMnndn4EJfHm464qaENxJ2tUTwEPK6d7MkFONKfaZyfKhJrsJ7TLbOsdurLVy16HxxxHtm"
    "9J"
    "Gke5SsmIsxrCI/nmiRFhwqfyFaszN5BE/mcR9Lm+MsNz/b5U/"
    "05MdWW4fQZQkBezvMffXYSTCgL5"
    "FfZHTYYxVvFrLcphnmXo2KmNWq6bG2DPQuFsAHgHHSAv0klayBKY6F0ReSLskZtfgH4j6MBabX"
    "eB"
    "u3XUfLpjEpYImKsDjlEo7qeQQp5n6J8Qi5/"
    "x+pFSuyq6VURzW4M9lcz5xMTdMyNhDozKrxPEJRkJ"
    "wdUgqjYGcU+4mzndQjGnrWx3b/"
    "Ah9z2Wcw+SYroN12SBvXLZCIQ6pnxOK6KZkNa8fTSyss628eVn"
    "akjU7Fgd6Ka8QUP1rpFymFZ47H0qAzlDWBE66Qs0MWOYgboowjhU2taBfuAeDX3yfJV8qc7XEj"
    "wE"
    "laR7Utm3QpQlUpMie0Bd/"
    "egUWRkLRoDKog0IbRk91JK6+Kle71By209CWxrfeUXl5Fun7qYAB9cD"
    "YJXFY78pf5O+"
    "oWeQSThvtF3KcRP0qSCGWHhd5i3egLwDVBfGyq1n5Qe40xRARuq3NCu6tirgt1o/"
    "zUEbMV160IRgxEargItBmEEZQITewqVpXDisM+8Oidx1CwSwn8E9HjB843bke/"
    "Dh0o8Xs9LXwPoz"
    "KOoxzuovIYuPQRFUIIo54sIFt+"
    "exF62YwJ7gFtWQEuVVKqHsO3jhLdaqpHCnGJjcrMpWRtQqvpOC"
    "Fke8LIe0PT09LtaRG503MrRyhkX2h1QhjrRv8owlczvuTclcKl/"
    "8Rz8uVMoC+Sms7eC0nMhzFpYp"
    "NVC0BYa2X36fPiCA7iBEF4bSqPmnEU1VVsoBRMPCTjmDzClQekqGeoqnYW9aUBNeBhDYT1D9el"
    "BO"
    "t4HQ6VxpjVh3OcnPusW/"
    "Li5B0PtB9TNgAEzQII2uBo6YeGEdgXwZLUNO28igxxn8IUptZH7PyXUf"
    "y0csIdHJgRh0iuWZpdPDD8S8piEmclOabxjBJr99IH4IT8q3HYo2UGS6pY/"
    "1Ag0Cj3tr5BV+WYCJ"
    "cdQGJ3hG7hVoaBQg0IoAZVYDiuojdFpGQXUB4nPUZKv/"
    "k6VbSvMtETICq81oraMN8Tz1KuY+ecDZ"
    "IJWb7PCIjoloGIdp+CqiyCBTBCr6ZoT7rFlKvNXKSLkeqira6mndZbQcwH/"
    "iBPm0ZT5gaMwND6Uk"
    "ZzCBMre7P3SsSPmA9WgUu4s1EgjJVVFlK5Y8QAaDJsEs0s47rotsweLRYD/UXrZ6B25MBJfn7/"
    "7r"
    "/JI8ACvFRIEUDs3mQocUbx8+ijwRqBnj1zxiYO9lVMQlE8MIDfeElHEzx+"
    "aVz8ZzZPekVfU3n13+"
    "zgnGI0QwBeJlzHbAMgHrAXmKcvQB9vJO3bXDdzS2nE4zmQI+"
    "ry8NEwOQwQsYmN7kwTMbrI4yhG97"
    "UPHAAqQ3DQe/"
    "MsQpElplSJORD2Tv9EgWhYjw+5PrfaPetAKRiFfa3ANQUPlFHcUJmNU4VL0vzPXp"
    "IrRVZQZ0US+"
    "y70nZQEffhK4B95HxbeYOL2TGthyKtqhvER4adDcJRiH4CjqWNHRuTCopqmIA1CM4"
    "Xmk+"
    "4K2KfaeSdLuDDEB5p5zhLgQ3DWZKB2C9CRWCsNZXc93Bf0oCclXWOXrDTxEPEhwLtv5SO0cc"
    "NCsHj7tRd8xYkXSTpIRYhVSNKIYGJr1J2i8qNXlxsIumFRAZKLynpl0BALGQnhZrX/"
    "r4WJF5AGN4"
    "HokLGdMpV3uWhfa0qxp2d+o5P8HEvNA50Iam4kv60ZWeoXYqgx6Zh/"
    "SmP1HEgklgOmQjOLkACsPK"
    "D3mganyCKBW9Lo0N1d38yhEqgdT2iiGZuvujDEMHEHKabhAwRD0CGWHEkCXwSiQO0cpSAimfK9"
    "20"
    "kLiE3hs98oVmQZG9VcKIkoR9LoRLohY/ajEYuZBgK2VdttHuIvCAtIKDM8U/8WX+QeE9uv/"
    "cjvlL"
    "THTDfPrS1xgi0tujEXpZsSjrmWmZmuXKBp8gnRCwlVZjPcVZU4nN7oq5oBnTZTfx3Kn/"
    "gJsoM4Wu"
    "Dk6pyzCJsoufzLHT1vQATS0K7tymSHFT38wIpQK3ScOBQSqEfwglYhAoiCqDhyI/"
    "Eg0wBT0hP9h1"
    "pAVFHE8JfHJLSFOrsMqgO4KQsEzE400pEeQz9YVdec0DTqKDQ+"
    "45XdZEX11AO4YF1wi42hzOUzTP"
    "ohzfL4OkNzNItOUFZggmiD6QqCmdTdukT+D+"
    "qCxsHt8eSu7xhtC5sK8MgSsZFe7kchsCQGdEPe3q"
    "Q5/"
    "N3JSj9Vr7WjLfEkHINY0MANWMoc9L0gQzFcqR7sbuB2k1PYmYPTkr34sYaaQUKgA6Yv+NDtpv"
    "Vjt0woTo4wEOJeEgnoojRFpKwGQHhonCwZ7W69Be0ZwId1mL4uHK5eu9vdl09tSiIEINvX6YG5"
    "6q"
    "8NQhuTK4rmj8/"
    "ESMMh9E+4bsEABI+Xk1NalBSuA1mzyLTt+hMAwgYAXfKEWeo1ihYFuGRiJZRqlx"
    "Iy81h+dHARXkTZbkM12JpvZQ+Y2+"
    "LtpQjHcmkXi9SBoF9iSmZncFDKIlzNuU66nmepa0rkxf8TeT"
    "ubpgAqbMTdT6wDqQA1kXFwz5M8e1AMiBysAWZuyI90g04CGJB9f/"
    "dEYv1sbbHUUOV4DUtdFctA9s"
    "Ao5Mrqk1SVx6+o8V4fEBAmLCwg9hiVgZdSWsGnJOve3SoY8cIUNE+"
    "qlzCF2Zckb90jEoKpT58Frp"
    "fcsDBN95lQ0RN1IWvhsYS/mM89TDI5uTvkEqX8mBi3KtjB8LLW5AsCo7dOGLW6VQr/"
    "T2RZXd2pjw"
    "VqTvePhox/"
    "jxRIKlxGMixTdwX1adjU1rTnT9dxngAajcNn4o8W92Ilxnjtg9m3nDPuQgQ8pCmEzl"
    "eR8AwiB1uJvp7zKx6MfvutDLR78L260bElG1g5SKIaFPo68yDp49Yq5uhz5INZBjtsOfJZKA7l"
    "Cs"
    "WfwX3sUdBOjGr0FoTakQ82mBem7GUdezhRlxNjRiMlzhqPLfNEEKKlEzowZ6Ct7Wu2x+"
    "e4tFqV7x"
    "amkQ9ZX8S+IYU9iJUixhrwGGIZuTYN/oX5Kaci/TnU2HBo7g7WoNrIrCaQjgK08t/"
    "xzkUcOrHm6g"
    "vudxvNRHslKnydd38cGRwJkgsMiEiF96xNpbTMQ955abUVQhUqYrnSFPqaa6/"
    "YYKkWP7JIrbWXX3"
    "qFR+qy+obIyvN3ubrVXQOAIBRMmbv4agjhkNZhyxFHiYwdSQJBiMS2kbWiYVerWiRleQMqob5/"
    "eL"
    "vv5gLzRAP9BtODiCMsGRFqvu4Vq11AzXXLEKpbglc4ktBS6wTdPdzWslEEA8Kb/"
    "EJ4jf6agtdADR"
    "DoakCTpBAWQo/V2bXTzDJ931QTQBCiKu/"
    "kI2T2qXskf6gViahEcjSzqr5oLQDDWciN0m64ivJWNt"
    "KG/"
    "qeUjDnKcae+2R6zcOEunSGexT+a15CIwSoPEBxvwXAssvgf2dv0aeKE7HY5McI80vkeelKtKg"
    "EXxQLcODiYyEZNq05qEZUHwToUEh19col+a0tmM8N/"
    "G7BbZAWuKUeC0RNyEaYsTO9n4xX9Q6bRe2"
    "n3wMelGp0YYRJw7vacu/wBsO3xLZpsawW9fUeooRoTRDQhRl3ATmXabwPh3qYwRiAZq/"
    "S0asmj5t"
    "CA6r81lVtPv8WjvqoWd6MSpNO5CUXwCqNxMOrIQXIRN1ByvpqSpGLdMhV7RaEC25QwUQtBhzfL"
    "da"
    "RKC+NTnqW2Nberl1VC1EgdNDeigZVckg1l/nRS/"
    "Hb12SbiLUpqtc3kff1WOXGFgcNt01sJ1M0g2b"
    "PGlqRNyPWw30pJe1jFqMGBvCGlFCCC2HPbgmISYUGun9oIyU3KaFb35qIYya2vjFu3iFcCJtwF"
    "Uy"
    "+iUgWsEqS24HJfA02cozoFrdkpDDckEdqNiAaRjHinhNcoYjuw0XiE8VyFBW93I7hTTOt9Qdor"
    "I8"
    "agoNflwtKjRagnpvwqigI7rY9ZS9OgEf/"
    "rrKHwFnAm4GShKNYAUpx8WgjjdDe68op2G2UOC8bNW/"
    "ZcKsF3K3Wfv7GmqENimTOTXf1rQYoatkddZ+uzxtslWs6qunF5Dtwpy1za7Sp1p3cbNp/"
    "lq4uRIW"
    "Amfon8QCApjNHTDZoRndBK+1/"
    "xweZvPsNM8jrVUQFNZpkXdyo8WiJ8vPzGiWuOSNLCQUONjcuKGt"
    "xp1HZIcjQQF0VCBqAL3jGnSO1CZlCO3lhxbIaUQY5ab9ixBQYwWVS34anY2u8rzYXkXdrtW35X"
    "WQ"
    "/V4AbKeBO/"
    "5+mzaxkLbwVP4b2WoNG0syUMv97f2dAjjaqwDVl2t2za+EhHeYqeqAMUiqiqqjCMJH"
    "YChTBN3AO3OFurDreljR6gSsQztGqtmaKYDUGjyj4PFPeyLlZs9+LISz/"
    "DF0vlzEl9OJ6TrSiTiI"
    "XP+uEydByNAsbcEgmL6s2vt97kaDZMSV69qjxRyTq3rgmiCUrMCZC5xfmnrzcxhsS3+"
    "bNM1dSwVw"
    "rYykezRdsW2XzMrIaHptGUsr+"
    "k0rr4W2V37sbkreVkY2c0Z6VwwLEeDfcndfwxBwtXVcWytSeWIx"
    "G36N+qoZeUnr91pofGwVkO5pWlnIF0fYiB68jpFvFHNLKv60Putj81VrXYveEI1cu+"
    "TXIiRXnCZq"
    "0QLCVmIZo1bypO1bnZ5g4YSGrZ8Tm0D3F3EoMhYl5kiHawoWafODFr+"
    "wWWn2TNwHuGxRG0zR5HLV"
    "Xhmhw0oV9Tbs+qcQtANClR2VxLEttSpVi6amv6LtP3+PPlY67iehmqE521PR+"
    "1FHSRjr8vHKsNvU"
    "AAtUS7JErV2bF95rgSyiqo6gNfCdQlXNb2m8LpLuODF3yKTgGRQ2mL+Wi1AYAvI+g+"
    "qkXUVt1g/f"
    "t39QjUmuLwGLGgb9tgwPUyAiqDeU2vwlrqg101emriRcXn21CRJMfhC1LViQI4j88yotoAKKEb"
    "TE"
    "kyWw3fumFpoR7NA/"
    "r84y86d+9Ob3VoQMILS8EwZYrZY+oEqyxzT8mqrve86iq1fa0aJcqLelevOv"
    "EQ3awUHDP0LS+Sm9K4VTTeE4SRwZPhrkeNkSMr3ze9veRXJELDxaLJmDaN3I/"
    "+1yTB3RPZOjD7w2"
    "LL1OyGAXtYiIEVvYAspMK7gMk0qEoaDrZjqn/"
    "jKBeDlULVUmF3hfMajugfGkAZH0gNxIaGQ6ZlKs"
    "0Jc529IqIaNf2jKrmg3BdCZmtMWnPVzJSLKFG6MXM5liTSdJfFa1xtyt63IhqacjMk/"
    "qUyWPXdcO"
    "LHk+"
    "5mC7abCd3h1P2l3vC3EQ6aCS23QzWHxreSlJCJuoIvDMyEmVmRSfVEiW7y9v9YvjfzksqIY5"
    "0ELwBREzq3loO5PocW8tpDnmv0RRzD+9Wu5AMVwV4jv7/"
    "k0es+ZRbxG3Wx9tqsJoPI8af7RO43LQ"
    "6YMocSw5H6K8wr+gjNuDxCfG8C3X8DolfD/"
    "+Cv8yXwsPxBHnvxRX+K24IBg+kSS60IpYGcE1pQ/M"
    "iIhQujZ0sT+mw5rvckt4IMyh7RKWU/Au2rMgHFo3n7ZKrlWbHUJfqfiCVHVDg5E/"
    "6W+QH699O3DS"
    "bUELOyS4jAdvYWkmJhZq7WJYJZAr4todRhFqlzbU+YRdgDISiNx+G+"
    "QmgSSA8GewPDbkUmWeLiaH"
    "rfVAZLP21yRPAal2VYRvnby45huw719LyQN+05Yyci/BfgOJ0z1tzAz1c/"
    "Egabj99I1e1EIlOKEJ"
    "loSY0vb01ooFElpLIKWjCR8Ue6lVy5ta/"
    "X5X+MgKxFGOUyCgwr5wlKpckz3VazthY0VocOgkpPhJ"
    "4AQmzllLQgyWe5GW1CEqLby7pU1h7Qr2plVb+p92l23X0tZ9Om2jzdYTKgeK1Y4Qbfpmr/"
    "Wnqz2t"
    "o4M9Aaodtp+TmjaH7CO5P/B/eQqdm/"
    "lv2Q8EorZCTMasECCUJcLUFh1aDPHgbGe+v5fhQ7CgdCoF"
    "8mjHJ9LDOvSjoTFG7YFryz1M/F4/nd5HIwVcfrn+bvQnHtM3shZOBZyPFo9DRclijbOiTtxp/"
    "bn5"
    "BMfQPaq39S4PO9sikTbq1hpRi2kmHod2q7pPJrXxyOVdNYDnmDi0htibCBMMQVOZdKkYrYO4dJ"
    "SE"
    "ThlJnlTuq60OsOgrk0NRe20sSIzowBqgp/uUn2MfFJWtJVNLjgdpvXq+69U0YU/"
    "x0Z0pVFtHYVz0"
    "YNgCdUOMAmpAW5FXklkLcftg0cK6TkvxnZpA/ulkAMkcuWl3PmsbXXt+tnmhydh2eWoh/"
    "5xz2doa"
    "OrHIvDg1c6Lt3zXnLgK0USfcwPo2abYoUauaOpBx0mracCEd/"
    "T2Zkj3S3322dXsl5Rz0KVbiwWuv"
    "aictmi22x5Bm1dYuqoBeNIWiK7IrOoUCd72LdWBbpzCgUT6ZS0rp3Ups6PdmPElSMXhU8rC9i9"
    "dQ"
    "5rVORkZjDlZ11AIMSSFpb0r6gb5jBzpiGE8b7+kE2w/"
    "GA6vMm1bEp7ZouTvgVWWVk9zsUdu5DYEa"
    "4yx9wSjfphzNR5ocYtVmu63sJ1T0EK0VcBm/"
    "TXhm3aZTl0Zyx6nlMOlNjWaXM7uWI7jdadqADbBR"
    "mO/UKG/tGyGyQtYxHIO4+72PkOkDWnDAoL6HRLIWxqqOtJF2PiG/NQN/"
    "8FnBPtohsdlUD93BUZjZ"
    "n6MCvjStjdUZlEU7dAA0chnJ6zARrHElRWPowdNsUDg6DzFwY0i/"
    "besUeDWEccjvCY6pvSrZdUUE"
    "N5NxkzHZRhADtm2TJI6jFrTY1P1wlg6Q1tEg1LqdbwiTTjCYbO7ank+"
    "g2g5YCUMFzxX9o20i21c/"
    "jxpVS04cM79tZPTnJmKMb4qMT35PZPSsDRqI8qzUn6UebpveqQbtyISovTnHU6QnbCHM2ybrZo"
    "it"
    "RPNGWpqeUryg7kry5gdkNYxeL4WnRjVZWkvoDvo8MIvX5hMkyg2hevNjwRZwpaynR7V7PgHToz"
    "O1"
    "87CJ6KSOymo5qLu7ErQZnII6EcGPMUEN+PngdShNW2XqBKXJVSC1saIRc9Lr72N3jP+"
    "c67TFJdel"
    "9dkUf5aehh0YxGtgVagnj3MCzTIPOgwgRV+0T4qEqy+"
    "RdecLplEbkeVnNyUkBDLlukSlWpqBbsVS"
    "CLGkeyiKAGnpIBvC8/AubsPBw8af2ot/"
    "jxahBpg1uYaReSL6k4Qioy6pPO9KEpKs5N9H1tLaUK2n"
    "BbdEw1P1+FQ2KC5q/rKoOl5RapLxtqNfOvaH0NDxnfiunSBFMnxD70/"
    "0Ybkd3vcwPPWFiSUPvggO"
    "MFSWi1WrKZs4NKkXf1pE/"
    "m8QkHYiVQBSyzBaWXxDhh2nb1CrSUqqa2FB51a1NYkDoWNo+z5rnbUM"
    "W5UWIIFLK07OGVJtaO69X7pKVJLO2WqhEPVH7cYHCm3GPZR7lEWlPgKurv5s+"
    "jqTCFo6fM7PzjXo"
    "jqLpivyVztKB2SwVexe9fek06MlG8u3dShhaiKJap5JtJ0Ye1SZiIndYgNC2R83TbusZFBVSBU"
    "a8"
    "YNUW8JEl1OFvQOqKMUsOi4lkneagLzS1hiTCRcrp+J72d6/"
    "WNiStdBQF6XetVxdtEelsgVNukDla"
    "N/"
    "uOp1C5IDRj3lPIdhogEHk7VqftyShZ5eejtSSd7ECNlTYftyeD1ZEuRABuKOps15v4J76yhqhV"
    "O9M2KHg/"
    "RXVMB03yLctDkBSjS9POGGkGRPk7yoDQKnk+i9LBciIl4svw3+6Dj0G3lEpayDLrfE5n"
    "QYKOzh5iBGp0fnHEB0w8Wpc6Pk2dhdPBOx1bLGZiyGPTkuz8znEyX/"
    "ramNrp8bghyPzaORXBasjK"
    "8MRWn5FQYd1O43e0CY0BfslLzUUt0lZdHOyp82JJ7YXUfxtIOv+FupIYoGpbe/"
    "f6c3mS9XBTi9NW"
    "a0xGkVenswBqCUiT0FqkPRPBEnV6+ZFJXdkWjlTRWkhCNqmpJKS11zQoYGlpW/"
    "b5PojaXV8XYCBF"
    "57oHjqVgv+yUBxasDa1O2DkchJ9OzmTxsNyBHa2y9WEg7B+0CLQ4dHT22JoXkskH2/7XubFSB/"
    "T6"
    "HfzS6mUhbIiFjMd3KNVEu9JR92XHjnRqkqT0SuHq/"
    "gHNTRTg6zD3moUZIJJeva9TIn7RDMd2uyxv"
    "p3ofwkusirb9CYHXBnzQCojITqYhv6cWCChwi8F3tXk7P65mZ8HG7+"
    "g8RaaYdBiJQKvjUP86y4Tc"
    "BQnpPUSsAO5qh1W1RdhUHPBof1D+AUPfxJf4aPOpRbwj05EF7THP8dWEJYWGnJgQb/"
    "kOmGkb0k5G"
    "lQFDCmjfvSpzuuZuJaYDdK7jclhnrWdpa8V/"
    "SvWRWTjRcmanpkC2jkxMIlvLy6GEhfLx20Jg9D9x"
    "g3Xagbq17dgjWqIHpjweM2h12L6IDj/ZMfxkR1a68lN1pAdYyEva/"
    "jXqXNiPnxiMWBTm1nUYTeus"
    "FO1/"
    "AxGPXUkt07FEAAABfmlDQ1BpY2MAAHicfZE9SMNAGIbftpaqVBzsIOKQoTpZkCoiuGgVilAh"
    "1AqtOphc+gdNGpIUF0fBteDgz2LVwcVZVwdXQRD8AXFydFJ0kRK/"
    "SwotYrzjuIf3vvfl7jvA36gw"
    "1ewaB1TNMtLJhJDNrQqhVwTRQzOOGYmZ+pwopuA5vu7h4/tdjGd51/"
    "05+pS8yQCfQDzLdMMi3iCe"
    "2rR0zvvEEVaSFOJz4jGDLkj8yHXZ5TfORYf9PDNiZNLzxBFiodjBcgezkqESTxJHFVWjfH/"
    "WZYXz"
    "Fme1UmOte/"
    "IXhvPayjLXaQ0jiUUsQYQAGTWUUYGFGO0aKSbSdJ7w8A85fpFcMrnKYORYQBUqJMcP"
    "/ge/e2sWJuJuUjgBBF9s+2MECO0Czbptfx/"
    "bdvMECDwDV1rbX20A05+k19ta9Ajo3wYurtuavAdc"
    "7gCDT7pkSI4UoOUvFID3M/qmHDBwC/SuuX1rneP0AchQr1I3wMEhMFqk7HWPd3d39u3fmlb/"
    "fgCz"
    "eXLBenbHAgAAAAZiS0dEACQAJAAkzkU4VgAAAAlwSFlzAAAuIwAALiMBeKU/"
    "dgAAAAd0SU1FB+QF"
    "CQk7BbfgE/"
    "YAAAAZdEVYdENvbW1lbnQAQ3JlYXRlZCB3aXRoIEdJTVBXgQ4XAAAYg0lEQVR42q1b"
    "WYwlZ3X+"
    "zr9U3a1v98y0Z7PHNtiG4EwQRA4oCBmyCARCCggFHiLFLyiJTXhAMFlQiEDkASTL8GCB"
    "lAdeIhYJgYRQJKKI4BiBJlLGjuQlXsbL2J7xTM9MT/"
    "ddq+rf8nDPKf9d01iEpKSr7r5dy7+c853v"
    "fOcU/"
    "cGhQ34ZAjQRfEqoYkQCcLQssQgBC++xALBhDEbWonIOAFASIaQEABgaA6sUAGDmPXacgyIC"
    "APSVQiCCCwEHrQUAbFiLi3UNAO15CoDm3w8VBS5WFQDA8TMIQB0jAlbH7YMBAOBFvs+"
    "QCGNjYHgc"
    "ckS+"
    "fpfHPQ2rOyz4PCMnNjHCp4SQEgjAIWuhAaxpjW3vUQJwIcCnBB8jlikhAiiVwpDvMfEeBRFG"
    "ZnXbBAA8gCZGzLxvFyA/"
    "rjmHG4oCCcDYGHQPIkJPKRwqCqhs4ZchoOEJaaUQnEMCMNIa13gTFICe"
    "1u296hjRxIiGCEap1QKsGYNlCNApwWY7MQthtYI8WRMjNozBIgTc1O/"
    "jWtNgESOsUph7D0oJnneV"
    "ePX7xmDHOWgeuCZaLQxPAAAWIWDOv3cXYBEjjhYF1rNFW4SAV6oKTQioYkShFHyMABE076yLEY"
    "oI"
    "ixCwASCwdS9DwEhr9NiK1diY1YSJWjMea40mRoy0hiWCIUKTEpqU9gyujhGGCCml9uNihI8RLk"
    "ZE"
    "AFeaBssQEAFUfP0rVYVjZYkNa9FXCp6vE6t5bDKBixEuJRREmHiPi3XdWpBYVBMj6pRQp4Q5Py"
    "+m"
    "hMSuEzMXAICh1hhqjXwWRgaqiVrzqGLEpcUCR8sSYiHzEOB4IgBWu8+"
    "7NmITG1vb3lxM8GhZIrEP"
    "PzObIWqNg0XRWliIEaVSmHjfWgkBuOgcfms0age6k01+"
    "5j1KIpTGYNY0WFcKCcCRssTT8zku1jVG"
    "xqAKAX2tYZXCsaLAucUCCUCPCH22NFOx71cxoo4RFZt9yFZpbAzW+"
    "IKnZjMoIsz5vFIpbDUN1rTG"
    "NASQmHeMiCFgTWt43oWb+"
    "n0Q0N674gVVRIhKAUqhiRFL3oirTYMxmz6xNfW1xqGiwPPzOeoYURKh"
    "CgFWa1yqawgERrYoqxTqGLEIAcd7vXYzzi2XKJSCkRVvUkKVRYOCCJoIQ2OwZLMeGoPAZuVjhC"
    "bC"
    "zHtoAAW7CbE1aaIW4UlANkYQf/"
    "fycokmG+Rha1EqhZgSNosC55bLPe6mABRKYR4CdpwDGMQoxj3n"
    "JT5vbAwigELr19yLNyIB2CwKEAAzMgaJwebmzORKpUB88uWmQWSf0ozK4jbENz1YFJg6h1l4zX"
    "YI"
    "wKW6btFdQpSEw2O8EwOtcQMPKLH7WLayNWvbSOLERUNAAuBjhFEKU+9hUsJAa/"
    "QEx6xtF9ilhCZG"
    "bHsPQ7RyuRDQUwomsg8HazEyBjElXKzrFjx6SuFwUax2XCkMOP6+vFxiYAy2Ob7uOoclo/"
    "KAV10w"
    "pK81rjYNKo4Y1/"
    "gadELUNQ5jC++xZkw7nnVrMUwJBwUPnGsnp3hxxZVcjNiwFj6l1gJlMxKwAkYA"
    "NxQFrjkH0+8QB4nTyxCwZHNbtxaLEBC8h+"
    "fQlg88poQbyhIz71cIzNFhFgKaGHFjdm7LD3jAlkNU"
    "HuISEYZKYZPB8mrTtNd4DsuJQ2pPawSebKkUdp3D1HsMGbOoM7ceR52LVYUErCxA4/"
    "pj7j1cSqjY"
    "fFyMqwcphZQSiAgV74JPCdecwzwErBsDx8gOAAOODJEHvQwBi5QAIniO1YmtRBYPAKaMMQd4Ee"
    "Q4"
    "YC0OsNtuMegdKkvsOIdLdY2h1iiUQuToZolwc7+"
    "PeQgolVpZRUoohAleqWuUSmHbOWzVNQqlMNAa"
    "Win0ibBsGjw/"
    "n6NQCptliWUIcN7DyW4w6Cx4twGgZpAEgBERnq5rHBY+wRhxa7+PifdoYsQW77Bm"
    "IBWfn4WA6XKJJfurYnBF9tyevn77EltVEyOG1mLbuXbCMSUsmNESAFNwDBWzFzOUGycAC60RQt"
    "j3"
    "QeBVFrLzSlUhpoQhx18CYEPAnHd6YAxSSthqmhXZiRGKzTykhJoX7oC4XUqwbG0E4MZer33+"
    "Jc4X"
    "xNTlowCMrMXEe0xiRO09DhcFFiFgZAxKpSB2ZYTRDY1pw5iA2TxGJCIMVoR8DzdHSm1CAkZzlZ"
    "nw"
    "kn35YtO0rFFi8M39PraaBiTuxN+"
    "PjMERraGIcK1pWrZ3C0cnRfRa6BRrCQEL5iRDpfbkIcSWEFLC"
    "Vl3D8GbntNpsWItdZllVCHAxoqcUSiKMyhIX63q1qsz35egrhSmjtpim8ALwTm9ai4lzq0VhE8"
    "yR"
    "WTjAjdZCc2hd5wmM+n1sTya4pd/fk/zkWNCkBM/"
    "f9ZTCurUY8eRqDpWJLcKlBJ0SyiwXoTwbpOxn"
    "kxLE0DQnNiklTBgY27TVWhgibFiLGdPOW9fXsd00LU84UBRtIpLY/"
    "4SXg3doEUIbMkNK2OVoooiw"
    "YIYqlFwG/3yHKMliCvYUSq3GpBS8kLeU4DJ86isF8yrn0xvGgNgHN6yFUQpX2QyJidHN/"
    "T7OLhbX"
    "40BKmHuPOafDksMHxhLiHUqML8LyCiLUfO6FqsLQGGxw3hFSguHFr7JFkJ/"
    "CT17JcEBl7FMAr1AK"
    "h6xFzVEod8WYEvbknj2tVxSTCHUImPKOW46x+"
    "x3E190yGGCXszajFNYydF5k5kh5bGYmSUDLEife"
    "r1gnfz/"
    "lvy0v4Bqn4wOtMWHC5HlyW02zB5dSlv+XWuNGtjIAeIk3wYyyga4ZAxUCagaWmndfAFAR"
    "4cZer83a5CE7PMhCqVXOzylpTAk7jAFiuiNJvxn5PZ/"
    "7hsEAPiXMvF9FDqVWyQqn25MQsO0cjpQl"
    "cvZfCWB7j3Vr8dxiAWJmajm5ksXeyRioSwmFWEAdIyqhiSmh0BpVjCtAIsKa1ogpYZsRXXwscd"
    "Yn"
    "ExxkiYeAYu09FmxJPiXMQsBmUbSc3vEC5Dl6nzfFZOZc8wKr7PsczE6Oxy19PzubtUApx6t1jR"
    "5f"
    "N9Aac++RUoLZdg4uJdwxGGAaApbeo+awsmEtFIC+MbjMWCHsT8DseK/"
    "Xqiw1Ty6XrcALusXR5ACT"
    "IXEFy34e2IwHWqPmFD0xGRIBBACuxYi+"
    "1qiYqgdJqzlZAwBiMFyEsEqHObpdqGtoIhREKJijmBFT"
    "UMOaWk9rGKVaagoizL1HFcJKfWGAGluLnlIIMWLqPWbeQ7FASlm4k9AVmOFVPOCCwRH87GtNg7"
    "Ex"
    "qFkdEnN1KaHHi3KkLFtxVFzMKIU1a9t4v2DxdadpUIWwStczFilptWeLNEu+"
    "WeIbRM7G5ARkMtNA"
    "KQwYrBqmmsTkR3SAhpld7ITXIctu4v+S1JR8T0WElxYLKKWw3TStCwmzAwOj4rEuWSFuOGQ+"
    "slxC"
    "EWGk9Qo3OF22HJUK1g/"
    "GnGVWbIXGxYg1a9u47dh0RBUSuTrxoJsQoJVCzDh3YjGUsrQzZHJ2Lk9L"
    "Opp4UQ+wv8+"
    "8X7kVS3K6I65SNpFCKSxjXP1uLWJKWDMGLyyXMJn19bRuE6LASV8VAoywWQBKTn61"
    "rjEJAVdY67vzfe+jJ2Yz/dhspv9rOtUPnTunFYDIi/Hdn/9cPT6b6TOTiT67XOq/f/"
    "BBajjO1jGi"
    "DgEn3vEOuv/731c/fuYZ9dTOjn52NtO/ePll/c0f/"
    "1i980MfopQStp3DxarCq1W12tWU2uxUZaHM"
    "xbgya16gOvvZsNso2STGEM/fHS0K3Nzr4Xi/"
    "j7G1sCyrHSoKmL7WrVlFvjh21F8AOHjwIN71sY/R"
    "v37nOykCuO2222hfYsA7+0f33kuf/+IX1ShTmQBgc3MTd7/nPbQ2HuPDP/"
    "pR8imtNH2+rq81+ozS"
    "gh3ioqI4AwCxhcbMTY9w6jznkEnGIHDkMURQLMldquu2UKJKraGUwhUiXOaU1mWImh9/"
    "+IEPIAH4"
    "yCc/ScPOxBRLXUSEO971Lvq7L3yhnfxzZ8+mv/"
    "rMZ+IH3vve+J1vfSt6npy4UcomCgDfOn1aPb1Y"
    "6DNbWzonRcIkFxw+KyZr202Dfzp9Wv3nZKIfunBBi5DbU2pPHQKMY5pdwnWZoFIKkTO9PMuez+"
    "cY"
    "Doe48+RJSkB69913U/49OnH805/"
    "7HK2tra3IztWr+MRHP5rOPfNM0kT4m9OnUVVVfNvb306C3Jqj"
    "je7cp0u5fUqIWSVItMlmH2FUfroYMXUORqmW0RZEKwwggpoRYUaEvlLoSUzuyFQXzp9PIQTc+"
    "oY3"
    "0MZNN+Etd965SoHPnUvdh16qa/z2XXe17vHwT38arz3/"
    "fHs3oxT+4VOfSv9x+nQ6UhQ4zL5YsgyG"
    "jvul7JMnNBLbE/"
    "+dsut6SrV6hBRJBJuWIaykOAZT1fotI3zNLpAPwzmHCxcupLIs8af33ksnbr6Z"
    "Qgh4/rnnrhvsh++5p919APjFww/v0fM8+/"
    "HXTp1KSx7Q6x050Iy0xpDDmCRc6CRAQtakDCZKk+J7"
    "VSyNDbhKpChGyEfi7DHekfw4++yzAIA//vjHyRiDVy9cSK5prrPYkydP7vn7oZ/"
    "8BFOu20laKkwx"
    "ZGKIUPJFljfIZMbGrKpPnBcIfgRB/"
    "85YpSahuNolAm9ICa9UFS5W1Ur04ZC4x8TaVLIzsUcfeST9"
    "3u//Ph07fpwA4OzZs/vu1Np43H7nvcfVF19Mcr9D1rZgJij/6fvvpz+/"
    "7759U83RaISLTbNH9Hv4"
    "oYfSU08+mf7sda55Yjbbc82/P/RQ+sQHPxgl12myRVbHjMExY2BjRMkJR9cFAOD73/"
    "3uHl3w0Uce"
    "2XNKZP+nPRFxlRlSjEgcy4U9En79I/"
    "4a11Qx4lrTtIWRXC3aIyhIGau7AC899li6cP58EqHjh9/7"
    "3r6IPZ1MXlNorMXmiRPoa71HhxMzHWT5wK96pF9z0SyXzq1EAAHlS1wFusKVHTBl7K7ymjG4+"
    "81v"
    "jhKqWK2h3AU0EZ58/PE91/3u+99P//LNbyYCsOs9DnKGOdAaHsBXT51KXz11KsRMQ/"
    "jRmTPqLXfe"
    "SbPZDL+5uRnk+8AWSgC+dupUyBWifz5zRt3J19x15EiYeg/FmZ/"
    "l5E6Spz7XIGvGvD2ysqSeqROO"
    "fPZ3yTekzs70lMK/ffvbaTadtt+/++679+y66Pt/"
    "8ZWvkNpnl4qO8iTx33MxpWsx6yyj5Uep1Cq7"
    "5UXzPFESHZDHoIighHpuSAmckfmXhiSiNh53zVFA9JEzZ9p/"
    "3f3e96rhG99Iu87hkLVwKeEvH3iA"
    "fued76TIup/hwfgOQCHLBCUT7Wnd6oyeOb/rbBax6Cq7r9liU1705fEr5Poc/"
    "xzt45sNq8EjrVGy"
    "dv/Ljq9++ctpxqrM5uYmvv2DH9DH7ruPbnzb2+ivv/"
    "EN+pN77lF5nUG4h+esb89zOcwRx3LLJEZC"
    "qSxaTqCk6lNojbExWOecQCpJiv9XEMFQBn6U7bLOB0IEw6s4YybVLapKeNNEePpnP0tf/"
    "tKX4t9+"
    "/vNqOBrh9ttvp/"
    "sfeOC6FZNKUN4n0E3EDma1wYJ5vCzMRlEgseSeL6i4p2YxxxHhjtEIW02Difeo"
    "U4JumtUC5BMQv+iz2ewXIair7ObIni3KD7/+9fTEo4/GT372s3TyrW/FgQMHSGuN3Z0d/"
    "PeTT6Z/"
    "fPDBFLOmBcW5AIjwkbvuimLmeb3CMEZICFt4j5ot5MN33RUNN3TIXERHAKvKBREKY5Cca/"
    "UFet/m"
    "pi+1XrW+hYCLdQ0veXnmN55r+zVXbW2Ht0+zYoYUPjxncj6r+emsNCVVJKkQF/"
    "uAa805vVEKA87w"
    "xAKkFtGwecszKdMRDBH6WuNNw2GrL76wWOA3OFM1ADB1DpFppSUCcf+"
    "cZT9TABJPWiYeAZSs1XWL"
    "k6mjCkk6K0lIqVSLKT2WsORc28GAyFbZ4+"
    "6Pg9bimnM4YAxK3uXGe7gYseRnHuv10MQII9QbwPmq"
    "Arh0J5HGpbTqDxDx0yqFARFKIky9x9jatlq0qTVm3re6YaEUyow19rJSV84LAMDxxMWMW+"
    "vhSvFa"
    "Viu4yFVjKIUGQMFRwcSIXgi4oShW0h0LoDYriBZKoQoBY2NW3ShcQN0oihbtJ51uM1OxCNKSm5"
    "RQ"
    "Zk0OmgiK637SSZpYzBwag8TmK2Em8L36SrXdYJYTLeEBazzAIcvbI+"
    "442XUOm9Zii5ugLFuZdIDk"
    "H6lSW6KVlXCpTeoTQ2OgADw1n2OrrtseSDleWC5XfUtCUBJ3Z11pGhRKYYPR13ILW6EU1o3BzH"
    "tE"
    "zuwm3rcTFgs43O+3QsRV5t7ImiRBhCVPnriwYpmialZuNRF6zA+s1phy7WLErXBJiiQ84UNat+"
    "23"
    "UmK7UFVtTdIxvvmUMGKcKXlDjfT/"
    "NTHi1aqCTwkvLRYo2OekJnixrtvKkcla6KasrUl7ndTgrVJt"
    "43WhNYYcrmShTFYuv9w0ONHvt4itibBhzKo0xmOYeN82XQo4Fux+"
    "V51rwyV1stMeV6uoo0xLa66Z"
    "ZxnerYMBrnBFWMrfgrrOGFziRfC8CCpreuxJ2MkeLiXxnIF1ByjE5/H5HABwS1niIJux/H/"
    "SNPAc"
    "aRYh4JZ+H0t2SxcjTmYCzIWsglXHuOoH5LFqIrhVF2W7kOY61M3q/"
    "1NuYq5CwNAYjLkfwBJhO2uJ"
    "V9mKvrhYtJzhcFaN3eXWtpTSqhuFKz1F1mhdxYjLTYOx1tjm5gsZn3ShD7luKZUjCaWGqO0qA4"
    "Bj"
    "ZdlqDoVSq253dhtJ+gwRTC5J9Rk8UoaSPs+"
    "YeIGWXDwJKSHECGJtTUTKxJFiygNoYzs3XPf2ySOk"
    "ByFkDVCRa4WBQfdSXaOJEYGrQt3Nk16FbecwYizqSegG8ErTIIaAyLgDocL5sWTJWcx8GSOGGf"
    "uK"
    "mf/ud7xxMEDgsviSixk39fv/KxFDOkGIu1RLKeFnL2hI1WoRI85XFQzr/"
    "evWtgKosMJLTYOjRYHb"
    "yhJEhGcWC2gpvx/"
    "lrivpu8tJjeWw1dcaE6GPzAQVs705d3ybTjlbLGiQpaqC3COtsdU0eHw6bRMb"
    "0exFPDnLmCAdHtJFGjlyUMY1pElDSufrWaOUhOgmhFUSx2XzCYBFng12LUFzGFozBmNjQBwqpQ"
    "9H"
    "wFHS2e7kFyG0PH+He38PlyVGWed5/uxuEnS0LOH5ebncPeno/"
    "kfLEmvcUjtlqdwS4Zpz2M5Enjyd"
    "vyFr6zeaOyfmPGBFhCFT3J7WbV9NVzgZW4uB1rjCVnO439+Tih4uy7aNFezLV51DTylc5lj+"
    "ejof"
    "cShc0xrnq6rtSyhCwCyztnWejAgngh3dBV0IXvH4TmiNgdYw0hYvA5IuMJGQdpj+"
    "Sqo6UAo3FEXb"
    "xdE9pObmc27P+fzY2lUfPy+ytMs0POBFCNhgyk159aarTOXsM+"
    "ss3U8z1Pwy1WXncIBdSTZyoDUM"
    "OqYrnRXyIoV0gG7yS1RXuE1GXp8R1D7PTUcuAyohOtISpwC4fQZac3g03F9wua5xvNdrOb68nF"
    "US"
    "4ZC1bfPWGjd3el6YNXYvArCRzWsZApASnl8u8easicpJNnioKPa8ybUMAZYIT8xme4WRX/"
    "HYLEss"
    "pVGC43vL/CRllkIHo/44a82deY9nZ7O2UbpgOtvtJWprgpICp4SXmc1S1rdccp/"
    "AbRwa24bNbnG0"
    "4XaXugNyA+7CzMGyYnA5L0oy595B0DclJK7MeAB106x2MQO1RQjYqqpVO77WWDMGT7GUprP+"
    "YGSZ"
    "ZS58DrTGkjs95G0TUa173E6ns5riZW7DGWRh1exbRAgBB6zFHcMhCGhfitjnhT4cYKIRGH1DBp"
    "g1"
    "Z5TEmOKy/"
    "wmIxdfR+wXBY0q4mUFWE+HG0QiJ8Umwo+BmKJHljFJYYwlP3HTXe+w6t2r+YmZpan7I"
    "nEPINrO/"
    "XrZTJgNJIsLxXg+7zuGyc6sUVF5X0Ro3GYOJcy1LrDOpO2VdZip7OcOlBOkZONHvt11i"
    "Ano26z7ta43tprnu5UupEbbvBHTkPGTRTLrhm64FWKUw4hxduHbDpWhRX49n7eq5S8gkR1q3r9"
    "E9"
    "O59f1yvU3WGbCZ3r1u55NxAAjpcl5qxZ1DFexyFGxuBY3kLPrXCRXbDP4W7ufSuGuDwr7cZfeb"
    "lw"
    "vzaZ7lGwVkBcgamZlmoiHClL3MbNEy/"
    "M5ys5O3tpUfqAc6Iz4Va7nG+s8ZunsaMmX2karFvbWu4V"
    "bot702iEy02DCWND+"
    "3IVvzlSKIXHp1OEELDzyzAgFzDSPgtRc7Niw5odd0Zfd55PCRPnVi9dc46h"
    "OhPPd3TX+7Yh8wT7fPeQl66lMLOMEZNOoeagtdiwFpebph1/4GuWzEq1WEC3PTXvpQWAOQ/"
    "Qew+l"
    "NV7hCYeUAK2x3lmgifcYZxllvmv5LjoAM2tRsVnW7HLFPomWoPYiI0Wxk6Gm7DvNEvuY+"
    "wEXnc0x"
    "3AK8ZwH+Pw4pO3vuKx7x62z/l0MSNJ9Jd3tcRikkFnLXjGn9XIBwzK3/"
    "E+cw8R67WfoOAP8Dat2F"
    "I20deesAAAAASUVORK5CYII=";

void StatusHandler::handle_info(Connection &conn) {
   MineNet::Message::Writer w;
   w.write_byte(0);

   std::stringstream ss;
   ss << R"({"description":{"extra":[{"color": "red", "bold": true, "text": "Mine"}, {"color": "gold", "bold": true, "text": "C++"}, {"color":"gray", "text": "\nA minecraft server backend written in C++"}], "text": ""},)";
   ss << R"("favicon":"data:image/png;base64,)" << favicon << R"(",)";
   ss << R"("players":{"max":34,"online":2},)";
   ss << R"("version":{"name": "1.15.2", "protocol": 578}})";

   w.write_string(ss.str());
   conn.send_and_read(w, *this);
}

void StatusHandler::handle_ping(Connection &conn, MineNet::Message::Reader &r) {
   auto player_time = r.read_big_endian<uint64_t>();
   BOOST_LOG_TRIVIAL(info) << "player time " << player_time;

   MineNet::Message::Writer w;
   w.write_byte(1);
   w.write_big_endian(player_time);
   conn.send_and_disconnect(w);
}

} // namespace Front::Protocol
