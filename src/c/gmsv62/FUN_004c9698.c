/* FUN_004c9698 - 0x004c9698 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c9698(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = **(int **)(unaff_EBP + 0xc);
  iVar4 = (*(int **)(unaff_EBP + 0xc))[1];
  *(int *)(unaff_EBP + -0x30) = iVar3 + -0x14;
  *(int *)(unaff_EBP + -0x28) = iVar3 + 0x14;
  iVar3 = *(int *)(extraout_ECX + 0x2c);
  *(int *)(unaff_EBP + -0x2c) = iVar4 + -0x28;
  *(int *)(unaff_EBP + -0x24) = iVar4 + 10;
  if (iVar3 == 0) {
LAB_004c9823:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    iVar4 = *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    *(uint *)(unaff_EBP + 0xc) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    FUN_004cd4d5();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x30);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar3 == 0) &&
       (iVar3 = FUN_005545a2(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x34)), iVar3 != 0)) {
LAB_004c97e9:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iVar3 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      iVar4 = *(int *)(iVar3 + 0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(iVar3 + 0x3c);
      iVar3 = *piVar2;
      *(int **)(unaff_EBP + -0x10) = piVar2;
      iVar3 = (**(code **)(iVar3 + 0x8c))
                        (piVar2,unaff_EBP + -0x20,unaff_EBP + -0x1c,0,0,0,0,0,0,
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      if ((*(char *)(iVar3 + 0x1d) != '\0') && (*(int *)(iVar3 + 0x48) == 3)) {
        iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x20),
                                *(undefined4 *)(unaff_EBP + -0x1c));
        iVar3 = *(int *)(unaff_EBP + -0x14);
        if (iVar4 != 0) {
          iVar3 = FUN_005cee94(*(undefined4 *)(iVar3 + 0x20));
          if (iVar3 == 0) goto LAB_004c97e9;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_004cd5da(0);
          }
          goto LAB_004c9823;
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    if (iVar3 != 0) {
      FUN_004cd5da(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_004c9823;
    iVar3 = *(int *)(unaff_EBP + 0xc);
  } while( true );
}


