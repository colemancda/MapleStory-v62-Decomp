/* FUN_00819171 - 0x00819171 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00819171(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  piVar2 = DAT_0097c244;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)*piVar2;
      iVar3 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
      piVar2 = piVar1 + 9;
      *(uint *)(unaff_EBP + -0x20) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(int **)(unaff_EBP + -0x28) = piVar1;
      *(int **)(unaff_EBP + -0x1c) = piVar2;
      iVar3 = (*DAT_0097b5a4)(piVar2);
      if (iVar3 == 0) {
        uVar4 = FUN_00816537(unaff_EBP + -0x78,piVar2);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar3 = FUN_00402e32(unaff_EBP + -0x38,uVar4);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x78);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        (**(code **)(*piVar1 + 0x2c))(piVar2);
        iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        iVar3 = piVar1[0x15];
        if (iVar3 != 0) {
          while( true ) {
            piVar2 = *(int **)(iVar3 + 4);
            iVar3 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
            *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
            iVar3 = FUN_00402e32(unaff_EBP + -0x58,&DAT_00980690);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            iVar3 = piVar2[6];
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar1 = (int *)piVar2[6];
            iVar3 = *piVar1;
            *(int **)(unaff_EBP + -0x24) = piVar1;
            iVar3 = (**(code **)(iVar3 + 0x8c))
                              (piVar1,0,0,unaff_EBP + -0x14,unaff_EBP + -0x10,0,0,0,0,
                               *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54)
                               ,*(undefined4 *)(unaff_EBP + -0x50),
                               *(undefined4 *)(unaff_EBP + -0x4c));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963de8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x58);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x14);
            *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x10);
            *(int *)(unaff_EBP + -0x40) = piVar2[7] + *(int *)(unaff_EBP + -0x14);
            *(int *)(unaff_EBP + -0x3c) = piVar2[8] + *(int *)(unaff_EBP + -0x10);
            iVar3 = (**(code **)(piVar2[1] + 0x28))();
            if ((iVar3 != 0) &&
               (iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x68,*(undefined4 *)(unaff_EBP + -0x1c),
                                        unaff_EBP + -0x48), iVar3 != 0)) {
              uVar4 = FUN_00816537(unaff_EBP + -0x88,unaff_EBP + -0x68);
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar3 = FUN_00402e32(unaff_EBP + -0x38,uVar4);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x88);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              (**(code **)(*piVar2 + 0x1c))
                        (*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),
                         unaff_EBP + -0x68);
              iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) break;
            iVar3 = *(int *)(unaff_EBP + -0x18);
          }
          piVar2 = *(int **)(unaff_EBP + -0x1c);
        }
        (*DAT_0097b508)(piVar2);
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) break;
      piVar2 = *(int **)(unaff_EBP + -0x20);
    }
  }
  FUN_0081982a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


