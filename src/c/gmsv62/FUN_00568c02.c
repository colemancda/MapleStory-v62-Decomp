/* FUN_00568c02 - 0x00568c02 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00568c02(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xf4) = 0;
  *(undefined4 *)(extraout_ECX + 0x104) = *(undefined4 *)(extraout_ECX + 0x108);
  *(undefined4 *)(extraout_ECX + 0xf8) = 1;
  FUN_0060142b(0xf,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00457cda(1);
  FUN_004751b2(unaff_EBP + -0x1c);
  FUN_0056874a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


