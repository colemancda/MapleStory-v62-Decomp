/* FUN_006cf158 - 0x006cf158 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006cf158(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004de520();
  _DAT_0097bd5c = -(uint)(extraout_ECX + 0x33 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x33,8,7,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_008efeec;
  extraout_ECX[1] = &PTR_LAB_008efea0;
  extraout_ECX[2] = &PTR_FUN_008efe9c;
  FUN_004de5cc(0,0xff,0,0x2c3,0x15c,0x2c3,0x15c,0x2c3,0x15c,500,0,500);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x896);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004de636(0x5d,0xf5,uVar1,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


