/* FUN_00529a6f - 0x00529a6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00529a6f(void)

{
  DWORD DVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0x19,4,5,&LAB_00450362,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x1e,4,4,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x26] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x27,4,0xc,&LAB_00450362,FUN_004115cc);
  *extraout_ECX = &PTR_FUN_008eb460;
  extraout_ECX[1] = &PTR_LAB_008eb414;
  extraout_ECX[2] = &PTR_FUN_008eb410;
  DVar1 = timeGetTime();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x35] = DVar1;
  return extraout_ECX;
}


