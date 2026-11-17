/* FUN_004c1abe - 0x004c1abe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c1abe(void)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 *puStack_30;
  
  FUN_00879bb8();
  puStack_30 = (undefined4 *)0x1;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_34 = 0x4c1ada;
  iVar4 = FUN_004c2076();
  if ((iVar4 != 0) && ((*(int *)(extraout_ECX + 0x10) == 2 || (*(int *)(extraout_ECX + 0x10) == 5)))
     ) {
    puStack_30 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00978368;
    iStack_34 = 0x4c1b05;
    iVar4 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar4 + 4);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_30 = (undefined4 *)0x0;
      iStack_34 = 0x4c1b1b;
      FUN_0045e7c2();
    }
    puStack_30 = (undefined4 *)0x0;
    iStack_34 = 500;
    iStack_38 = 0x4c1b29;
    iVar4 = FUN_004becbc();
    if (iVar4 != 0) {
      puStack_30 = *(undefined4 **)(extraout_ECX + 0x14);
      iStack_38 = unaff_EBP + -0x18;
      iStack_34 = *(undefined4 *)(extraout_ECX + 0x10);
      uStack_3c = 0x4c1b42;
      iVar4 = FUN_00458c4f();
      piVar1 = *(int **)(iVar4 + 4);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puStack_30 = (undefined4 *)0x0;
        iStack_34 = 0x4c1b53;
        FUN_00449913();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      if (piVar1 != (int *)0x0) {
        puStack_30 = (undefined4 *)0x4c1b65;
        iVar4 = (**(code **)(*piVar1 + 4))();
        if (iVar4 == 0) {
          *(int **)(unaff_EBP + -0x14) = piVar1 + 3;
          puStack_30 = (undefined4 *)0x4c1b88;
          iVar4 = FUN_0045e2eb();
          iVar4 = iVar4 / 10000;
          if (((((iVar4 == 200) || (iVar4 == 0xc9)) || (iVar4 == 0xca)) ||
              ((iVar4 == 0xcd || (iVar4 == 0xdd)))) || ((iVar4 == 0xec || (iVar4 == 0xee)))) {
            uVar8 = *(undefined4 *)(unaff_EBP + 0xc);
            uVar2 = *(undefined4 *)(unaff_EBP + 8);
            iStack_38 = 0x4c1bd6;
            iStack_34 = uVar2;
            puStack_30 = (undefined4 *)uVar8;
            iVar4 = FUN_006b38b8();
            if (iVar4 == 200) {
              iStack_38 = 0x4c1bea;
              iStack_34 = uVar2;
              puStack_30 = (undefined4 *)uVar8;
              iStack_38 = FUN_0045e2eb();
              uStack_3c = 0x4c1bf2;
              FUN_006b18ed();
            }
            else {
              iStack_38 = 0x4c1c04;
              iStack_34 = uVar2;
              puStack_30 = (undefined4 *)uVar8;
              iVar4 = FUN_006b38b8();
              if (iVar4 == 0xc9) {
                iStack_38 = 0x4c1c1f;
                iStack_34 = uVar2;
                puStack_30 = (undefined4 *)uVar8;
                iStack_38 = FUN_0045e2eb();
                uStack_3c = 0x4c1c27;
                FUN_006b1dec();
              }
            }
LAB_004c1efd:
            uVar8 = 1;
            goto LAB_004c1f10;
          }
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              puStack_30 = *(undefined4 **)(unaff_EBP + 0xc);
              iStack_34 = *(undefined4 *)(unaff_EBP + 8);
              iStack_38 = 0x4c1cb2;
              iVar4 = FUN_006b1535();
              if (iVar4 == 0xe) {
                iVar4 = 0x72;
              }
            }
            else {
              puStack_30 = *(undefined4 **)(unaff_EBP + 0xc);
              iStack_34 = *(undefined4 *)(unaff_EBP + 8);
              iStack_38 = 0x4c1c8d;
              iVar4 = FUN_006b38b8();
              if (((iVar4 == 0xe) || (iVar4 == 0x1e)) || (iVar4 == 0x26)) {
                iVar4 = iVar4 + 100;
              }
            }
            *(int *)(unaff_EBP + 8) = -iVar4;
          }
          else {
            if (DAT_00979178 == 0) {
LAB_004c1c56:
              iVar4 = 0;
            }
            else {
              puStack_30 = &DAT_0097bcf4;
              iStack_34 = 0x4c1c4a;
              iVar5 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))();
              iVar4 = DAT_00979178;
              if (iVar5 == 0) goto LAB_004c1c56;
            }
            if (*(int *)(iVar4 + 0x578) != 0) goto LAB_004c1f0e;
            *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar4 + 0x8c);
            puStack_30 = (undefined4 *)0x4c1c72;
            uVar8 = FUN_006aabac();
            *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
          }
          puStack_30 = *(undefined4 **)(unaff_EBP + 8);
          iStack_38 = unaff_EBP + -0x2c;
          iStack_34 = 1;
          uStack_3c = 0x4c1ccf;
          iVar4 = FUN_00458c4f();
          piVar1 = *(int **)(iVar4 + 4);
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            puStack_30 = (undefined4 *)0x0;
            iStack_34 = 0x4c1ce0;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
          }
          if (piVar1 != (int *)0x0) {
            puStack_30 = (undefined4 *)0x4c1cf3;
            uVar8 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar8;
            puStack_30 = (undefined4 *)0x4c1d00;
            puStack_30 = (undefined4 *)FUN_0045e2eb();
            iStack_34 = *(undefined4 *)(unaff_EBP + 0xc);
            iStack_38 = 0x4c1d09;
            iVar4 = FUN_004c1f21();
            if (iVar4 != 0) {
              puStack_30 = (undefined4 *)0x4c1d1a;
              iVar4 = (**(code **)(*piVar1 + 4))();
              if (iVar4 != 0) {
                puStack_30 = (undefined4 *)0x0;
                iStack_34 = 1;
                iStack_38 = 0;
                uStack_3c = 0;
                *(undefined4 **)(unaff_EBP + 0xc) = &uStack_40;
                FUN_00679d22(&uStack_40,0x110b);
                iVar4 = FUN_007db791();
                if (iVar4 != 6) goto LAB_004c1f0e;
              }
              puStack_30 = (undefined4 *)0x23b4a0;
              iStack_34 = 2;
              iStack_38 = 0x4c1d5b;
              iVar4 = FUN_004b8476();
              if (iVar4 == 0) {
                *(undefined4 *)(unaff_EBP + -0x10) = 1;
              }
              else if (*(int *)(unaff_EBP + -0x10) == 0) {
                puStack_30 = (undefined4 *)0x0;
                iStack_34 = 0;
                iStack_38 = 0;
                uStack_3c = 0;
                *(undefined4 **)(unaff_EBP + 0xc) = &uStack_40;
                FUN_00679d22(&uStack_40,0xf35);
                iVar4 = FUN_007db791();
                *(uint *)(unaff_EBP + -0x10) = (iVar4 == 6) + 1;
              }
              puStack_30 = *(undefined4 **)(unaff_EBP + 0x10);
              iStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
              iStack_38 = *(undefined4 *)(unaff_EBP + 8);
              uStack_3c = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x14);
              uStack_40 = 0x4c1daf;
              FUN_00834982();
              goto LAB_004c1efd;
            }
            puStack_30 = (undefined4 *)0x4c1dbc;
            iVar4 = FUN_0045e2eb();
            *(int *)(unaff_EBP + 0xc) = iVar4;
            if ((iVar4 / 10000 == 0x1fa) && (*(int *)(unaff_EBP + 0xc) % 10 == 0)) {
              puStack_30 = (undefined4 *)0x4c1dea;
              iVar4 = FUN_0045e2eb();
              if (iVar4 / 1000000 == 1) {
                puStack_30 = (undefined4 *)(unaff_EBP + 0x14);
                iStack_34 = 0x4c1e06;
                puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x20))();
                if (((char *)*puVar6 == (char *)0x0) || (*(char *)*puVar6 == '\0')) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                *(bool *)(unaff_EBP + 0xf) = !bVar3;
                puStack_30 = (undefined4 *)0x4c1e25;
                FUN_00414ebb();
                if (*(char *)(unaff_EBP + 0xf) != '\0') {
                  iStack_34 = 1;
                  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_40;
                  uVar8 = 0xc8b;
                  goto LAB_004c1e3a;
                }
                *(undefined4 *)(unaff_EBP + 0x10) = 0;
                *(undefined4 *)(unaff_EBP + -4) = 0;
                puStack_30 = (undefined4 *)0x4c1e65;
                puStack_30 = (undefined4 *)FUN_0045e2eb();
                iStack_34 = unaff_EBP + -0x10;
                iStack_38 = 0x4c1e71;
                puVar6 = (undefined4 *)FUN_0045a1d8();
                puStack_30 = (undefined4 *)0xc8c;
                iStack_34 = unaff_EBP + -0x24;
                *(undefined1 *)(unaff_EBP + -4) = 1;
                iStack_38 = 0x4c1e8a;
                puVar7 = (undefined4 *)FUN_00679d22();
                puStack_30 = (undefined4 *)*puVar6;
                iStack_34 = *puVar7;
                iStack_38 = unaff_EBP + 0x10;
                *(undefined1 *)(unaff_EBP + -4) = 2;
                uStack_3c = 0x4c1e9c;
                FUN_00434e21();
                *(undefined1 *)(unaff_EBP + -4) = 1;
                puStack_30 = (undefined4 *)0x4c1eab;
                FUN_00414ebb();
                *(undefined1 *)(unaff_EBP + -4) = 0;
                puStack_30 = (undefined4 *)0x4c1eb6;
                FUN_00414ebb();
                puStack_30 = (undefined4 *)0x0;
                iStack_34 = 1;
                iStack_38 = 0;
                uStack_3c = 0;
                *(undefined4 **)(unaff_EBP + 0xc) = &uStack_40;
                FUN_00450368(unaff_EBP + 0x10);
                iVar4 = FUN_007db791();
                if (iVar4 == 6) {
                  puStack_30 = *(undefined4 **)(unaff_EBP + 8);
                  iStack_34 = 0x4c1ee2;
                  iStack_34 = FUN_0045e2eb();
                  iStack_38 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x14);
                  uStack_3c = 0x4c1ef1;
                  FUN_00835c49();
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  puStack_30 = (undefined4 *)0x4c1efd;
                  FUN_00414ebb();
                  goto LAB_004c1efd;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                puStack_30 = (undefined4 *)0x4c1f0e;
                FUN_00414ebb();
              }
            }
          }
        }
        else {
          iStack_34 = 0;
          *(undefined4 **)(unaff_EBP + 0xc) = &uStack_40;
          uVar8 = 0xd12;
LAB_004c1e3a:
          puStack_30 = (undefined4 *)0x0;
          iStack_38 = 0;
          uStack_3c = 0;
          FUN_00679d22(&uStack_40,uVar8);
          FUN_007db3ad();
        }
      }
    }
  }
LAB_004c1f0e:
  uVar8 = 0;
LAB_004c1f10:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


