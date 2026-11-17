/* FUN_0045372d - 0x0045372d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0045372d(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 == 0xf) {
    (*DAT_0097b578)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x7c);
    (*DAT_0097b574)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x7c);
  }
  else {
    if ((uVar1 < 0x100) || ((0x101 < uVar1 && ((uVar1 < 0x104 || (0x105 < uVar1)))))) {
      uVar5 = (*DAT_0097b510)(*(undefined4 *)(unaff_EBP + 8),uVar1,*(undefined4 *)(unaff_EBP + 0x10)
                              ,*(undefined4 *)(unaff_EBP + 0x14));
      goto LAB_00453845;
    }
    puVar2 = *(undefined4 **)(extraout_ECX + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_008f3784,unaff_EBP + -0x10);
    }
    iVar3 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 9) {
      puVar2 = *(undefined4 **)(extraout_ECX + 0x1c);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,&DAT_008f37d4,unaff_EBP + 8);
      }
      uVar5 = *(undefined4 *)(extraout_ECX + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      (*DAT_0097b56c)(uVar5,unaff_EBP + -0x20);
      (**(code **)(**(int **)(unaff_EBP + 8) + 0x2c))
                (*(int **)(unaff_EBP + 8),0xfffffffc,0,extraout_ECX,0,
                 *(undefined4 *)(extraout_ECX + 0x14),unaff_EBP + -0x20);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0x14);
    *(int *)(unaff_EBP + -0x34) = iVar3;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x14))
              (*(int **)(unaff_EBP + -0x10),unaff_EBP + -0x3c);
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  uVar5 = 0;
LAB_00453845:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


