/* FUN_007726fc - 0x007726fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007726fc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  int local_50;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x28);
  iVar2 = *(int *)(iVar1 + 0x818);
  if ((iVar2 != 0) && (iVar2 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    local_50 = unaff_EBP + -0x50;
    uVar3 = *(undefined4 *)(iVar1 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00772cd7(uVar3);
    *(int **)(unaff_EBP + -0x10) = &local_50;
    local_50 = 0;
    FUN_00414f8b(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00429303();
    FUN_004ea9b7();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_50 = 0x77276f;
    FUN_00770582();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


