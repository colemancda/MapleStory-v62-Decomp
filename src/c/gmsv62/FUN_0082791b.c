/* FUN_0082791b - 0x0082791b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0082791b(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  DAT_009784c0 = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(extraout_ECX + 0x92c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x978) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x97c,4,0xd,&LAB_0048c051,FUN_00411629);
  *(undefined4 *)(extraout_ECX + 0x9b0) = 0;
  *(undefined4 *)(extraout_ECX + 0x9b4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x9b8) = 0;
  *(undefined4 *)(extraout_ECX + 0x9c4) = 0;
  *(undefined4 *)(extraout_ECX + 0x9c8) = 0;
  *(undefined4 *)(extraout_ECX + 0x9cc) = 0;
  *(undefined ***)(extraout_ECX + 0x9bc) = &PTR_FUN_008f2eec;
  _memset((void *)(extraout_ECX + 8),0,0xc);
  _memset((void *)(extraout_ECX + 0x14),0,0xc);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


