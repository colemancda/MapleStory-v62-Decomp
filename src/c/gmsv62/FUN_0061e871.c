/* FUN_0061e871 - 0x0061e871 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0061e871(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0061eeae();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0061ed5d();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0061ec1b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0061eadb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004d7d1e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


