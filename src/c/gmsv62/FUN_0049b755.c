/* FUN_0049b755 - 0x0049b755 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0049b755(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  
  FUN_00879bb8();
  FUN_004b3795();
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0xd] = &PTR_FUN_008e9a74;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x19] = 0xffffffff;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x2b] = 0;
  FUN_0087b2f0(extraout_ECX + 0x2c,4,5,&LAB_00450362,FUN_004115cc);
  FUN_0087b2f0(extraout_ECX + 0x31,4,5,&LAB_00450362,FUN_004115cc);
  FUN_0087b2f0(extraout_ECX + 0x36,4,5,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3c] = 0;
  *extraout_ECX = &PTR_FUN_008e9a50;
  extraout_ECX[1] = &PTR_LAB_008e9a04;
  extraout_ECX[2] = &PTR_FUN_008e9a00;
  ExceptionList = unaff_retaddr;
  return extraout_ECX;
}


