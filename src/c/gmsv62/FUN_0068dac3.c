/* FUN_0068dac3 - 0x0068dac3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0068dac3(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  uint local_10;
  
  FUN_00879bb8();
  if ((((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) && (*(int *)(unaff_EBP + 8) == 0xd)) &&
     (*(int *)(extraout_ECX + 0x198) != 0)) {
    local_10 = unaff_EBP + 8;
    puVar1 = (undefined4 *)FUN_0045b90e();
    if (((char *)*puVar1 == (char *)0x0) || (*(char *)*puVar1 == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    local_10 = 0x68db17;
    FUN_00414ebb();
    if (uVar2 == 0) {
      local_10 = unaff_EBP + 0xc;
      FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_10 = uVar2;
      FUN_004a2fef();
      local_10 = 0;
      *(uint **)(unaff_EBP + -0x10) = &local_10;
      FUN_00414f8b(unaff_EBP + 0xc);
      FUN_005c149f();
      local_10 = -(uint)(*(int *)(extraout_ECX + 0x198) != 0) & *(int *)(extraout_ECX + 0x198) + 4U;
      FUN_00817f6e();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_10 = 0x68db7b;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


