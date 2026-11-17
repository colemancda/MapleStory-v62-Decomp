/* FUN_007a5f0c - 0x007a5f0c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a5f0c(void)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  int *piStack_40;
  int *piStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  uVar7 = DAT_00978368;
  uVar4 = *(uint *)(unaff_EBP + 8) >> 0x10 & 0xff;
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar7;
  if ((uVar4 == 0x52) && ((*(uint *)(unaff_EBP + 8) >> 0x18 & 1) == 0)) {
    piStack_3c = (int *)0x7a5f51;
    iVar5 = FUN_004bed04();
    if ((iVar5 == 0) && ((extraout_ECX[0x14b] & 0xfffffffeU) != 0x12)) {
      piStack_3c = (int *)0x7a5f72;
      iVar5 = FUN_0050d2d6();
LAB_007a61d0:
      if (iVar5 == 0) {
        piStack_3c = (int *)0x7a61e5;
        piStack_3c = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
        piStack_40 = (int *)0x7a61ed;
        FUN_004c92f7();
      }
    }
  }
  else {
    if (uVar4 == 0x36) {
      uVar4 = 0x2a;
    }
    pcVar1 = (char *)(uVar4 * 5 + 4 + DAT_00979110);
    if ((*pcVar1 == '\0') || ((*pcVar1 != '\b' && (*(int *)(pcVar1 + 1) == 0)))) {
      uVar7 = 0;
      goto LAB_007a6543;
    }
    piStack_3c = (int *)(unaff_EBP + -0x30);
    piStack_40 = (int *)0x7a5fb1;
    iVar5 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      piStack_3c = (int *)0x0;
      piStack_40 = (int *)0x7a5fc7;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    if (((*pcVar1 != '\b') && (DAT_00978354 != 0)) && (*(int *)(DAT_00978354 + 0xc) != 0)) {
      piStack_3c = (int *)0x7a5fe5;
      FUN_00598d62();
    }
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      piStack_3c = (int *)0x7a64f9;
      iVar5 = FUN_007b3bb4();
      if (iVar5 == 0) {
        piStack_3c = (int *)0x7a6504;
        iVar5 = FUN_007a3f46();
        if (iVar5 != 0) {
          piStack_3c = *(int **)(pcVar1 + 1);
          piStack_40 = (int *)0x7a6510;
          iVar5 = FUN_00653d79();
          if (iVar5 == 0) goto LAB_007a653c;
        }
        piStack_3c = (int *)0x7a651c;
        iVar5 = FUN_004bed04();
        if (((iVar5 == 0) || (*(int *)(pcVar1 + 1) == 0x406849)) && (extraout_ECX[0x799] == 0)) {
          piStack_3c = *(int **)(pcVar1 + 1);
          piStack_40 = (int *)0x7a653c;
          FUN_007b8688();
        }
      }
    }
    else if (cVar2 == '\x02') {
      piStack_3c = (int *)0x7a6234;
      iVar5 = FUN_004bed04();
      if ((iVar5 == 0) && ((extraout_ECX[0x14b] & 0xfffffffeU) != 0x12)) {
        piStack_3c = (int *)0x0;
        piStack_40 = (int *)0xc8;
        iVar5 = FUN_004becbc();
        if (iVar5 != 0) {
          iVar5 = *(int *)(pcVar1 + 1);
          iVar6 = iVar5 / 10000;
          if ((((((((iVar6 == 200) || (iVar6 == 0xc9)) || (iVar6 == 0xca)) ||
                 ((iVar6 == 0xcd || (iVar6 == 0xdd)))) || (iVar6 == 0xec)) ||
               ((iVar6 == 0xee || (iVar6 == 0xd4)))) ||
              ((iVar6 == 0x20c || (((iVar6 == 0x12d || (iVar6 == 0x212)) || (iVar6 == 0xe2)))))) ||
             (((iVar6 == 0xe3 || (iVar5 / 1000 == 0x83d)) || (iVar5 == 0x200b63)))) {
            *(uint *)(unaff_EBP + -0x14) = (uint)(iVar6 == 0x12d);
            *(uint *)(unaff_EBP + -0x1c) = (uint)(iVar6 == 0x20c);
            *(uint *)(unaff_EBP + -0x20) = (uint)(iVar6 == 0x212);
            iVar5 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x3e3 +
                            ((*(int *)(unaff_EBP + -0x14) != 0) + 2) * 4);
            iVar6 = 0;
            if (iVar5 != 0) {
              iVar6 = *(int *)(iVar5 + -4);
            }
            *(undefined4 *)(unaff_EBP + 8) = 1;
            if (0 < iVar6 + -1) {
              do {
                if (*(int *)(unaff_EBP + -0x14) == 0) {
                  if (*(int *)(unaff_EBP + -0x1c) == 0) {
                    piStack_3c = (int *)((-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & 3) + 2);
                  }
                  else {
                    piStack_3c = (int *)0x5;
                  }
                }
                else {
                  piStack_3c = (int *)0x3;
                }
                piStack_40 = piStack_3c;
                piStack_3c = (int *)*(undefined4 *)(unaff_EBP + 8);
                iVar5 = FUN_00458c4f(unaff_EBP + -0x38);
                piVar3 = *(int **)(iVar5 + 4);
                if (*(int *)(unaff_EBP + -0x34) != 0) {
                  piStack_3c = (int *)0x0;
                  piStack_40 = (int *)0x7a6392;
                  FUN_00449913();
                  *(undefined4 *)(unaff_EBP + -0x34) = 0;
                }
                if (piVar3 != (int *)0x0) {
                  piStack_3c = (int *)0x7a63a2;
                  iVar5 = FUN_0045e2eb();
                  if (iVar5 == *(int *)(pcVar1 + 1)) {
                    piStack_3c = (int *)0x7a63ae;
                    iVar5 = (**(code **)(*piVar3 + 4))();
                    if (iVar5 == 0) {
                      if (*(int *)(unaff_EBP + 8) != 0) {
                        piStack_3c = (int *)0x7a63d1;
                        iVar5 = FUN_007a3f46();
                        if (iVar5 == 0) {
                          piStack_3c = *(int **)(pcVar1 + 1);
                          piStack_40 = (int *)0x7a63e7;
                          iVar5 = FUN_004c234a();
                          if (iVar5 == 0) {
                            piStack_40 = *(int **)(pcVar1 + 1);
                            iVar5 = (int)piStack_40 / 10000;
                            piStack_3c = piStack_40;
                            if (((iVar5 == 200) || (iVar5 == 0xc9)) ||
                               (((iVar5 == 0xca ||
                                 (((iVar5 == 0xcd || (iVar5 == 0xdd)) || (iVar5 == 0xec)))) ||
                                (iVar5 == 0xee)))) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_00834a5f();
                            }
                            else if (iVar5 == 0xd4) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_00834fcc();
                            }
                            else if (iVar5 == 0xe2) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_00835128();
                            }
                            else if ((iVar5 == 0x20c) || (iVar5 == 0x212)) {
                              piStack_3c = (int *)0x0;
                              FUN_00835c49(*(undefined4 *)(unaff_EBP + 8));
                            }
                            else if (iVar5 == 0x12d) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_0083a4ad();
                            }
                            else if (iVar5 == 0xe3) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_008351eb();
                            }
                            else if (((int)piStack_40 / 1000 == 0x83d) ||
                                    (piStack_40 == (int *)0x200b63)) {
                              piStack_40 = *(int **)(unaff_EBP + 8);
                              FUN_00834e65();
                            }
                          }
                          else {
                            piStack_3c = *(int **)(pcVar1 + 1);
                            piStack_40 = *(int **)(unaff_EBP + 8);
                            FUN_0083cd0a();
                          }
                        }
                      }
                      break;
                    }
                  }
                }
                *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
              } while (*(int *)(unaff_EBP + 8) <= iVar6 + -1);
            }
          }
        }
      }
    }
    else if (cVar2 == '\x03') {
      piStack_3c = *(int **)(pcVar1 + 1);
      iVar5 = (int)piStack_3c % 100;
      if ((*(byte *)(unaff_EBP + 9) & 1) == 0) {
        piStack_40 = (int *)0x7a6214;
        iVar6 = FUN_008496ef();
        piStack_3c = (int *)(iVar5 + 8);
        if (iVar6 != 0) goto LAB_007a621d;
      }
    }
    else if (cVar2 == '\x05') {
LAB_007a603b:
      iVar5 = *(int *)(pcVar1 + 1);
      if (iVar5 == 0x32) {
        piStack_3c = (int *)0x7a61a4;
        iVar5 = FUN_004bed04();
        if (iVar5 == 0) {
          piStack_3c = (int *)0x7a61b3;
          iVar5 = FUN_007b3bb4();
          if (iVar5 == 0) {
            piStack_3c = (int *)0x7a61c2;
            iVar5 = FUN_007a3f46();
            if (iVar5 == 0) {
              iVar5 = extraout_ECX[0x799];
              goto LAB_007a61d0;
            }
          }
        }
      }
      else if (iVar5 == 0x33) {
        piStack_3c = (int *)0x7a6198;
        FUN_007a5b1a();
      }
      else if (iVar5 == 0x34) {
        piStack_3c = (int *)0x7a618c;
        FUN_007a5914();
      }
      else if (iVar5 == 0x35) {
        piStack_3c = (int *)extraout_ECX[0x7be];
        piStack_40 = extraout_ECX + 0x7bc;
        iVar5 = FUN_004cd670();
        if (iVar5 == 0) {
          piStack_3c = (int *)0x28;
          piStack_40 = (int *)0x7a612d;
          uVar4 = FUN_005265f8();
          piStack_3c = (int *)0x7a6136;
          iVar5 = (**(code **)(*extraout_ECX + 4))();
          piStack_3c = *(int **)(iVar5 + 0x7b8);
          piStack_40 = (int *)(iVar5 + 0x7b0);
          iVar5 = FUN_00413367();
          if (iVar5 != 0) {
            uVar4 = (uint)(uVar4 == 0);
          }
          if (uVar4 == 0) {
            piStack_3c = (int *)0x0;
            piStack_40 = (int *)0x7a616f;
            FUN_007a442b();
          }
          else {
            piStack_3c = (int *)0x7a6161;
            FUN_007a44fe();
          }
        }
        else {
          piStack_3c = (int *)0xc8;
          piStack_40 = (int *)0x7a6180;
          FUN_0083a6ec();
        }
      }
      else if (iVar5 == 0x36) {
        if (DAT_00979260 == 0) {
          iVar5 = 0;
        }
        else {
          piStack_3c = (int *)0xc8;
          piStack_40 = (int *)0x7a607b;
          piStack_40 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
          iVar5 = FUN_005f1010();
        }
        uVar4 = -(uint)(iVar5 != 0) & iVar5 + 8U;
        *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar4 != 0) & uVar4 - 8;
        piStack_3c = (int *)0x7a60d6;
        FUN_005f1734();
        piStack_3c = *(int **)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (piStack_3c != (int *)0x0) {
          *(int ***)(unaff_EBP + 8) = &piStack_40;
          piStack_40 = extraout_ECX_00;
          FUN_005f1734();
          FUN_007b4113();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_3c = (int *)0x7a6103;
        FUN_005f171e();
      }
    }
    else if (cVar2 == '\x06') {
      piStack_3c = (int *)(*(int *)(pcVar1 + 1) + -99);
LAB_007a621d:
      piStack_40 = (int *)0x7a6228;
      FUN_0084942e();
    }
    else if (cVar2 == '\a') {
      uVar7 = *(undefined4 *)(pcVar1 + 1);
      piStack_40 = (int *)0x7a6090;
      piStack_3c = (int *)uVar7;
      iVar5 = FUN_008496ef();
      if (iVar5 != 0) {
        piStack_40 = (int *)0x7a60a4;
        piStack_3c = (int *)uVar7;
        FUN_0084951d();
      }
    }
    else if (cVar2 == '\b') {
      piStack_3c = (int *)0x7a6019;
      iVar5 = FUN_007b3bb4();
      if ((iVar5 == 0) && (extraout_ECX[0x799] == 0)) {
        piStack_3c = *(int **)(pcVar1 + 1);
        piStack_40 = (int *)0x7a603b;
        FUN_00598e63();
        goto LAB_007a603b;
      }
    }
  }
LAB_007a653c:
  uVar7 = 1;
LAB_007a6543:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


