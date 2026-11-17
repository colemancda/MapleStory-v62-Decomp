/* FUN_00591859 - 0x00591859 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00591859(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004de520();
  DAT_00979428 = -(uint)(extraout_ECX != (undefined4 *)0xffffff34) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x37] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3a] = 0;
  extraout_ECX[0x3b] = 0;
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3f] = 0;
  extraout_ECX[0x41] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008ec5f0;
  extraout_ECX[1] = &PTR_LAB_008ec5a4;
  extraout_ECX[2] = &PTR_FUN_008ec5a0;
  FUN_004de5cc(0,0xff,0,0xffffff50,0xfffffd50,0xffffff50,0xfffffd50,0xffffff50,0xfffffd50,300,0,0);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x54b);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004de636(0x1c0,0xfd,uVar1,10,0,*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


