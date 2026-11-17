/* FUN_006ce9ad - 0x006ce9ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006ce9ad(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004de520();
  _DAT_0097bd58 = -(uint)(extraout_ECX + 0x33 != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087b2f0(extraout_ECX + 0x33,8,4,ptr_0045e147,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_008efe58;
  extraout_ECX[1] = &PTR_LAB_008efe0c;
  extraout_ECX[2] = &PTR_FUN_008efe08;
  FUN_004de5cc(0,0xff,0,0x29a,0x1a7,0x29a,0x1a7,0x29a,0x1a7,500,0,500);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x893);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004de636(0x5d,0x8c,uVar1,10,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


