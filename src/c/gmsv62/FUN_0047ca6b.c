/* FUN_0047ca6b - 0x0047ca6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0047ca6b(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x110c);
  uVar2 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0047c69a(2,uVar2,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


