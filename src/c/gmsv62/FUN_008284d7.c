/* FUN_008284d7 - 0x008284d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_008284d7(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x96b);
  uVar2 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0047c824(0,uVar2,0xffffffff,0x80000000,0x7fffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


