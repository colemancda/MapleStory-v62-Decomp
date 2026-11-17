/* FUN_007afa05 - 0x007afa05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007afa05(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  uVar1 = FUN_0042452b();
  iVar3 = FUN_004029b9(0x150);
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0067ab39(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),uVar1
                        );
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar4 != 0) & uVar4 - 8;
  FUN_0079d81d();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0067ad87(extraout_ECX,*(undefined4 *)(unaff_EBP + 0xc));
  if ((*(int *)(unaff_EBP + -0x10) == 0x2f785a) || (*(int *)(unaff_EBP + -0x10) == 0x30fefa)) {
    FUN_005d6574(1,-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & *(int *)(unaff_EBP + -0x20) + 4U);
  }
  uVar2 = FUN_0079dcca();
  FUN_007b439a(unaff_EBP + -0x24);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 300) = uVar2;
  *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_0079db06(unaff_EBP + 0xc,unaff_EBP + -0x24);
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x20);
  FUN_0079d81d();
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005d0fed();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


