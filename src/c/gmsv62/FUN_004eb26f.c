/* FUN_004eb26f - 0x004eb26f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004eb26f(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 0xec) {
    if (param_2 == 0xeb) {
      FUN_004eceea(param_3);
      return;
    }
    switch(param_2) {
    case 0x61:
      FUN_004eb6c6(param_3);
      break;
    case 0x62:
      FUN_004eb816(param_3);
      break;
    case 99:
      FUN_004eb958(param_3);
      break;
    case 100:
      FUN_004ebbd4(param_3);
      break;
    case 0x65:
      FUN_004ebfe0(param_3);
      break;
    case 0x66:
      FUN_004ebdda(param_3);
      break;
    case 0x67:
      FUN_004ec8f3(param_3);
      break;
    case 0x68:
      FUN_004ec92d(param_3);
      break;
    case 0x69:
      FUN_004ee83d(param_3);
      break;
    case 0x6a:
      FUN_004ee8ce(param_3);
      break;
    case 0x6b:
      FUN_004ee991(param_3);
      break;
    case 0x6c:
      FUN_004ef076(param_3);
      break;
    case 0x6d:
      FUN_004ef6e7(param_3);
      break;
    case 0x6e:
      (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_3);
      break;
    default:
      goto switchD_004eb294_caseD_6f;
    case 0x71:
      FUN_004f0e40(param_3);
      break;
    case 0x72:
      FUN_004f0e53(param_3);
      break;
    case 0x73:
      FUN_004efa2a(param_3);
      break;
    case 0x74:
      FUN_004f0faa(param_3);
      break;
    case 0x75:
      FUN_004eb6b4(param_3);
      break;
    case 0x77:
      FUN_004f0ff6(param_3);
    }
  }
  else {
    if (param_2 == 0xec) {
      FUN_004ecdc2(param_3);
      return;
    }
    if (param_2 == 0xf0) {
      FUN_00692df9(param_3);
      return;
    }
    if (param_2 == 0xf3) {
      FUN_0063db0f(param_3);
      return;
    }
    if (param_2 == 0xf4) {
      FUN_006d5203(param_3);
      return;
    }
    if (param_2 == 0xf5) {
      FUN_005c0424(param_3);
      return;
    }
    if (param_2 == 0xfd) {
      FUN_006094ef(param_3);
      return;
    }
switchD_004eb294_caseD_6f:
    if ((param_2 < 0x78) || (0xae < param_2)) {
      if ((param_2 < 0xaf) || (0xc1 < param_2)) {
        if ((param_2 < 0xc2) || (0xc9 < param_2)) {
          if ((param_2 < 0xca) || (0xcc < param_2)) {
            if ((param_2 < 0xcd) || (0xce < param_2)) {
              if ((param_2 < 0xcf) || (0xd1 < param_2)) {
                if ((param_2 < 0xd2) || (0xd3 < param_2)) {
                  if ((param_2 < 0xd4) || (0xd5 < param_2)) {
                    if ((param_2 < 0xd6) || (0xd9 < param_2)) {
                      if ((param_2 < 0xed) || (0xed < param_2)) {
                        if ((param_2 < 0x107) || (0x109 < param_2)) {
                          if ((param_2 < 0xee) || (0xef < param_2)) {
                            if ((param_2 < 0xf1) || (0xf2 < param_2)) {
                              if ((param_2 < 0x5c) || (0x5e < param_2)) {
                                if ((param_2 < 0x5f) || (0x60 < param_2)) {
                                  if ((0x10b < param_2) && (param_2 < 0x112)) {
                                    FUN_0059d4f0(param_2,param_3);
                                  }
                                }
                                else {
                                  FUN_005a9958(param_2,param_3);
                                }
                              }
                              else {
                                FUN_0065bbb6(param_2,param_3);
                              }
                            }
                            else {
                              FUN_006772e3(param_2,param_3);
                            }
                          }
                          else {
                            FUN_00648e59(param_2,param_3);
                          }
                        }
                        else {
                          FUN_0051c0bf(param_2,param_3);
                        }
                      }
                      else {
                        FUN_006415ba(param_2,param_3);
                      }
                    }
                    else {
                      FUN_00634d36(param_2,param_3);
                    }
                  }
                  else {
                    FUN_00689161(param_2,param_3);
                  }
                }
                else {
                  FUN_00423ecc(param_2,param_3);
                }
              }
              else {
                FUN_005bd943(param_2,param_3);
              }
            }
            else {
              FUN_004ca4f7(param_2,param_3);
            }
          }
          else {
            FUN_004d47e1(param_2,param_3);
          }
        }
        else {
          FUN_005f1378(param_2,param_3);
        }
      }
      else {
        FUN_005d6059(param_2,param_3);
      }
    }
    else {
      FUN_007c065b(param_2,param_3);
    }
  }
  return;
}


