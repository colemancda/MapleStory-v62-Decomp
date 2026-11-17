/* FUN_005d511d - 0x005d511d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d511d(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_004308f4(*(undefined4 *)(unaff_EBP + 0xc));
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  uVar3 = FUN_0042459a();
  if (iVar2 == 0) {
    uVar3 = FUN_005d90ec(uVar3);
    iVar2 = FUN_005c38a9(uVar3);
    uVar4 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar4 != 0) & uVar4 - 8;
    FUN_005d1003();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_005d6644(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
    FUN_004d4ac9(unaff_EBP + 0xc,unaff_EBP + 0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00434d5d();
    FUN_005cfe71(uVar1,*(undefined4 *)(unaff_EBP + 0x10));
    FUN_005c3ed4(*(undefined4 *)(unaff_EBP + 0xc),uVar1);
  }
  else {
    FUN_005cfe71(uVar1,*(undefined4 *)(unaff_EBP + 0x10));
  }
  FUN_005c4d13(1);
  if (1 < *(int *)(unaff_EBP + 8)) {
    FUN_005cc3d9(1,-(uint)(DAT_00978358 != 0) & DAT_00978358 + 4U,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


