/* FUN_0051fa51 - 0x0051fa51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0051fa51(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc4fa();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1d] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x1e] = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008eafe0;
  extraout_ECX[1] = &PTR_FUN_008eaf94;
  extraout_ECX[2] = &PTR_FUN_008eaf90;
  _OOBECompleteWnfWaitCallback_28(0x113,100,0xfa,0x13a,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


