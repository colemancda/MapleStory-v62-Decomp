/* FUN_0081c681 - 0x0081c681 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0081c681(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char *extraout_ECX_01;
  char *pcVar11;
  int *extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  int *piStack_dc;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff2c;
  *(undefined4 *)(unaff_EBP + -0x5c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  piStack_dc = (int *)0x81c6aa;
  iVar4 = FUN_005f3a71();
  *(int *)(unaff_EBP + -0x54) = iVar4 + 0x88;
  if (**(int **)(iVar4 + 0x94) == -1) {
    piVar8 = *(int **)(unaff_EBP + 8);
    *piVar8 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    bVar2 = true;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_dc = (int *)0x81c6e6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_dc = (int *)0x81c6f6;
    FUN_00403191();
    piStack_dc = (int *)0x0;
    pcStack_e0 = (char *)(unaff_EBP + -0x74);
    pcStack_e4 = (char *)(unaff_EBP + -0x84);
    *(undefined4 **)(unaff_EBP + -0x50) = &uStack_e8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_e8 = extraout_ECX_00;
    FUN_00679e4e(&uStack_e8,0xf91);
    iVar4 = unaff_EBP + -0x94;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    pcStack_e0 = (char *)0x81c746;
    uVar5 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar5;
    piStack_dc = (int *)0x81c755;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      piStack_dc = (int *)0x81c766;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_dc = (int *)0x81c776;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_dc = (int *)0x81c781;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_dc = (int *)0x81c791;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_dc = (int *)0x81c79c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_dc = (int *)0x81c7a9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_dc = (int *)0x81c7b4;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piVar8 = *(int **)(unaff_EBP + 8);
      *piVar8 = 0;
LAB_0081c7be:
      FUN_004027eb();
      FUN_004027eb();
      FUN_004027eb();
    }
    else {
      piStack_dc = (int *)0x81c7e6;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                 *(IBinding **)(unaff_EBP + -0x1c));
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      while (bVar2) {
        piStack_dc = (int *)0x0;
        *(char ***)(unaff_EBP + -0x20) = &pcStack_e0;
        pcStack_e4 = s_MapLink_0096c478;
        uStack_e8 = 0x81c804;
        FUN_00448a17();
        pcStack_e4 = (char *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_e8 = 0x81c817;
        FUN_0040263d();
        uStack_e8 = 0x81c81e;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pcStack_e0 = (char *)0x81c829;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x60) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar4 != 0) {
          piStack_dc = (int *)0x81c83f;
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            piStack_dc = (int *)0x81c850;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_dc = (int *)0x81c860;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          piStack_dc = (int *)0x81c86b;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piVar8 = *(int **)(unaff_EBP + 8);
          *piVar8 = *(int *)(unaff_EBP + -0x14);
          FUN_004125cc();
          FUN_004027eb();
          goto LAB_0081c7be;
        }
        piStack_dc = (int *)FUN_0040cf4d();
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        pcStack_e0 = (char *)0x81c8a3;
        FUN_0056a92f();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_dc = (int *)0x81c8b6;
          FUN_00878dfb();
        }
        piStack_dc = (int *)FUN_0040cf4d();
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        pcStack_e0 = (char *)0x81c8ce;
        FUN_00445c8d();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            piStack_dc = (int *)0x81c8e4;
            FUN_00878dfb();
          }
          uVar6 = FUN_0040cf4d();
          if (uVar6 <= *(uint *)(unaff_EBP + -0x20)) break;
          FUN_0087a1b0();
          piStack_dc = (int *)0x0;
          pcStack_e4 = *(char **)(unaff_EBP + -0x20);
          uStack_e8 = 0x81c90a;
          pcStack_e0 = &stack0xffffff2c;
          pcStack_e4 = (char *)FUN_0048b981();
          *(char ***)(unaff_EBP + -0x3c) = &pcStack_e0;
          uStack_e8 = 0x81c916;
          FUN_00448a17();
          pcStack_e4 = (char *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          uStack_e8 = 0x81c929;
          FUN_0040263d();
          uStack_e8 = 0x81c930;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          pcStack_e0 = (char *)0x81c93b;
          iVar4 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x58) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (iVar4 != 0) {
            piStack_dc = (int *)0x81c951;
            iVar4 = FUN_00404b30();
            if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
              piStack_dc = (int *)0x81c962;
              FUN_00878dfb();
            }
          }
          pcVar11 = (char *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          piStack_dc = (int *)0x81c972;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_dc = (int *)0x81c97d;
            FUN_00878dfb();
            pcVar11 = extraout_ECX_01;
          }
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            piStack_dc = (int *)0x0;
            *(char ***)(unaff_EBP + -0x3c) = &pcStack_e0;
            pcStack_e4 = &DAT_0096c470;
            uStack_e8 = 0x81c998;
            pcStack_e0 = pcVar11;
            FUN_00448a17();
            pcStack_e4 = (char *)(unaff_EBP + -0xc4);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            uStack_e8 = 0x81c9ab;
            FUN_0040263d();
            uStack_e8 = 0x81c9b2;
            FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            pcStack_e0 = (char *)0x81c9bd;
            iVar4 = FUN_004032b4();
            *(int *)(unaff_EBP + -100) = iVar4;
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
            if (iVar4 != 0) {
              piStack_dc = (int *)0x81c9d3;
              iVar4 = FUN_00404b30();
              if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
                piStack_dc = (int *)0x81c9e4;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            piStack_dc = (int *)0x81c9f4;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              piStack_dc = (int *)0x81c9ff;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + -0x2c) != 0) {
              piStack_dc = (int *)s_Map_WorldMap__0096c460;
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
              pcStack_e0 = (char *)0x81ca2f;
              FUN_00414edd();
              *(int ***)(unaff_EBP + -0x3c) = &piStack_dc;
              pcStack_e0 = s_linkMap_0096c458;
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              pcStack_e4 = (char *)0x81ca48;
              FUN_00448a17();
              pcStack_e0 = (char *)(unaff_EBP + -0xb4);
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              pcStack_e4 = (char *)0x81ca5b;
              FUN_0040263d();
              pcStack_e4 = (char *)0x81ca62;
              piStack_dc = (int *)FUN_004048a4();
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              pcStack_e0 = (char *)0x81ca6c;
              piStack_dc = (int *)FUN_004343c5();
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
              pcStack_e0 = (char *)0x81ca7c;
              FUN_00454081();
              piStack_dc = *(int **)(unaff_EBP + -0x38);
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              pcStack_e0 = (char *)0x81ca98;
              FUN_0045efbb();
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              if (*(int *)(unaff_EBP + -0x38) != 0) {
                piStack_dc = (int *)0x81caac;
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              piStack_dc = (int *)0x81cabd;
              iVar4 = FUN_00402bc3();
              if (iVar4 < 0) {
                piStack_dc = (int *)0x81cac8;
                FUN_00878dfb();
              }
              piStack_dc = (int *)0x81cad3;
              _strlen(&DAT_0096c450);
              piStack_dc = (int *)&DAT_0096c450;
              pcStack_e0 = (char *)0x81cade;
              FUN_0045efbb();
              *(undefined1 *)(unaff_EBP + -4) = 0x1a;
              piStack_dc = (int *)0x81caf3;
              FUN_00403191();
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              piStack_dc = (int *)0x81cb00;
              FUN_00403191();
              piStack_dc = (int *)0x0;
              pcStack_e0 = (char *)(unaff_EBP + -0x84);
              pcStack_e4 = (char *)(unaff_EBP + -0x74);
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              uStack_e8 = 0x81cb19;
              uVar5 = FUN_00449713();
              *(undefined4 **)(unaff_EBP + -0x3c) = &uStack_e8;
              FUN_00448a17(uVar5);
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              FUN_00405a1d();
              FUN_00402660();
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              FUN_00404a02(unaff_EBP + -0xd4);
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              pcStack_e0 = (char *)0x81cb52;
              uVar5 = FUN_004032b4();
              *(undefined4 *)(unaff_EBP + -0x50) = uVar5;
              iVar4 = *(int *)(unaff_EBP + -0x20);
              piStack_dc = (int *)0x81cb6c;
              iVar7 = FUN_00404b30();
              if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
                piStack_dc = (int *)0x81cb7d;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              piStack_dc = (int *)0x81cb8d;
              iVar7 = FUN_00402bc3();
              if (iVar7 < 0) {
                piStack_dc = (int *)0x81cb98;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              piStack_dc = (int *)0x81cba5;
              iVar7 = FUN_00402bc3();
              if (iVar7 < 0) {
                piStack_dc = (int *)0x81cbb0;
                FUN_00878dfb();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1a;
              piStack_dc = (int *)0x81cbc0;
              iVar7 = FUN_00402bc3();
              if (iVar7 < 0) {
                piStack_dc = (int *)0x81cbcb;
                FUN_00878dfb();
              }
              iVar7 = *(int *)(unaff_EBP + -0x54);
              *(undefined4 *)(iVar4 * 4 + *(int *)(unaff_EBP + -0x30)) = 0;
              uVar6 = 0;
              iVar4 = *(int *)(iVar7 + 8);
              *(undefined4 *)(unaff_EBP + -4) = 0x16;
              if (iVar4 != 0) {
                do {
                  piStack_dc = (int *)0x81cbea;
                  FUN_005d1241();
                  piStack_dc = *(int **)(unaff_EBP + -0x20);
                  pcStack_e0 = (char *)0x81cbf7;
                  pcStack_e0 = (char *)FUN_00820ec7();
                  *(int ***)(unaff_EBP + -0x3c) = &piStack_dc;
                  pcStack_e4 = (char *)0x81cc03;
                  piStack_dc = extraout_ECX_02;
                  FUN_00424dbc();
                  pcStack_e0 = (char *)0x81cc0b;
                  iVar4 = FUN_0081bfca();
                  if (iVar4 != 0) {
                    piStack_dc = *(int **)(unaff_EBP + -0x1c);
                    *(undefined1 **)(unaff_EBP + -0x3c) = &stack0xffffff28;
                    if (piStack_dc != (int *)0x0) {
                      pcStack_e0 = (char *)0x81cc27;
                      (**(code **)(*piStack_dc + 4))();
                    }
                    piStack_dc = (int *)0x81cc2f;
                    cVar3 = FUN_00820ed3();
                    if (cVar3 != '\0') {
                      *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 1;
                    }
                    piVar8 = (int *)(*(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x20) * 4);
                    *piVar8 = *piVar8 + 1;
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *(uint *)(iVar7 + 8));
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x15;
              FUN_00414ebb();
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              piVar8 = (int *)FUN_0081cc78();
              return piVar8;
            }
            FUN_004027eb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_004027eb();
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        }
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          piVar8 = *(int **)(unaff_EBP + 8);
          *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) | 1;
          *piVar8 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00438c5b();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00445a30();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            piStack_dc = (int *)0x81ccd2;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
            piStack_dc = (int *)0x81cce3;
            (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
          }
          piVar10 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          goto LAB_0081cda6;
        }
        bVar2 = false;
        uVar6 = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            piStack_dc = (int *)0x81cd02;
            FUN_00878dfb();
          }
          uVar9 = FUN_0040cf4d();
          if (uVar9 <= uVar6) goto LAB_0081cd43;
          if (*(int *)(*(int *)(unaff_EBP + -0x30) + uVar6 * 4) == *(int *)(unaff_EBP + -0x48))
          break;
          uVar6 = uVar6 + 1;
        }
        piVar8 = *(int **)(*(int *)(unaff_EBP + -0x34) + uVar6 * 4);
        piVar10 = *(int **)(unaff_EBP + -0x14);
        if (piVar10 != piVar8) {
          *(int **)(unaff_EBP + -0x14) = piVar8;
          FUN_004125cc();
          if (piVar10 != (int *)0x0) {
            piStack_dc = (int *)0x81cd40;
            (**(code **)(*piVar10 + 8))();
          }
        }
        bVar2 = true;
LAB_0081cd43:
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00438c5b();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00445a30();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_dc = (int *)0x81cd70;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
      }
      piVar1 = *(int **)(unaff_EBP + -0x14);
      piVar8 = *(int **)(unaff_EBP + 8);
      *piVar8 = (int)piVar1;
      piVar10 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        piStack_dc = (int *)0x81cd87;
        (**(code **)(*piVar1 + 4))();
        piVar10 = *(int **)(unaff_EBP + -0x14);
      }
      *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) | 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
        piStack_dc = (int *)0x81cd9f;
        (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
        piVar10 = *(int **)(unaff_EBP + -0x14);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0081cda6:
      if (piVar10 != (int *)0x0) {
        piStack_dc = (int *)0x81cdb0;
        (**(code **)(*piVar10 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_dc = (int *)0x81cdc0;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar8;
}


