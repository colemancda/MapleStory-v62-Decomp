/* FUN_00587f29 - 0x00587f29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00587f29(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x108) = 0;
  FUN_00419192(unaff_EBP + 0xc);
  FUN_004de5cc(0,0xff,0,0xb2,0xa5,0xb2,0xa5,0xb2,0xa5,0x96,0,0x96);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xd4) = *(undefined4 *)(unaff_EBP + 8);
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


