/* FUN_004e1371 - 0x004e1371 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e1371(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xbc) = 3;
  FUN_004de5cc(0,0xff,0,0x1cf,0x1f2,0x1cf,0x1f2,0x1cf,0x1f2,1000,0x7fffffff,1000);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x514);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004de636(0x9b,0x2c,uVar1,10,1,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x4d7);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_007d3cdd(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  FUN_00817f6e(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


