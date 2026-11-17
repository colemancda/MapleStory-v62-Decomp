/* FUN_00471102 - 0x00471102 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00471102(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x47110c;
  FUN_00879bb8();
  if (DAT_00978360 != 0) {
    uStack_c = 0;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_c;
    local_8 = 0;
    uVar1 = (uint)*(ushort *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = FUN_00449713(uVar1,0xffffffff,0);
    FUN_00449784(uVar2);
    FUN_00743a59(uVar2,uVar1,uVar3,uVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


