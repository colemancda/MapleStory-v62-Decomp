/* FUN_007d32d4 - 0x007d32d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d32d4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar3 = *(int *)(unaff_EBP + 0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(undefined4 *)(unaff_EBP + 0xc),iVar3,*(undefined4 *)(unaff_EBP + 0x14)
                     ,*(undefined4 *)(unaff_EBP + 0x18),0xffd4d4d4);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(undefined4 *)(unaff_EBP + 0xc),iVar3,*(undefined4 *)(unaff_EBP + 0x14)
                     ,1,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(undefined4 *)(unaff_EBP + 0xc),iVar3,1,
                     *(undefined4 *)(unaff_EBP + 0x18),0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(int *)(unaff_EBP + 0xc) + -1 + *(int *)(unaff_EBP + 0x14),iVar3,1,
                     *(undefined4 *)(unaff_EBP + 0x18),0xff404040);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  iVar3 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(undefined4 *)(unaff_EBP + 0xc),iVar3 + -1 + *(int *)(unaff_EBP + 0x18)
                     ,*(undefined4 *)(unaff_EBP + 0x14),1,0xff404040);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


