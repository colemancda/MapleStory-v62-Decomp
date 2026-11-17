/* FUN_0065763e - 0x0065763e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065763e(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0047cf76();
  if (*(int *)(extraout_ECX + 0x54) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x54) = 0;
  }
  if (*(int *)(extraout_ECX + 0x50) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x50) = 0;
  }
  if (*(int *)(extraout_ECX + 0x4c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  }
  if (*(int *)(extraout_ECX + 0x48) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x48) = 0;
  }
  if (*(int *)(extraout_ECX + 0x44) != 0) {
    FUN_004030b1();
    *(undefined4 *)(extraout_ECX + 0x44) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


