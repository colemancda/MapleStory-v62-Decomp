/* FUN_004e5073 - 0x004e5073 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004e5073(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5bd6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0x1cb,0x38,2,&LAB_004e51fe,FUN_004e522a);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1e7,0x28,2,&LAB_004e527f,FUN_004e52a7);
  extraout_ECX[0x200] = 0;
  extraout_ECX[0x201] = 0;
  extraout_ECX[0x202] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x1fe] = &PTR_FUN_008ea778;
  *extraout_ECX = &PTR_FUN_008ea754;
  extraout_ECX[1] = &PTR_FUN_008ea708;
  extraout_ECX[2] = &PTR_FUN_008ea704;
  extraout_ECX[3] = &PTR_FUN_008ea700;
  return extraout_ECX;
}


