/* FUN_50c030aa - 0x50c030aa in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c030aa(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 1;
  *puVar1 = &PTR_LAB_50c131a0;
  *extraout_ECX = &PTR_FUN_50c1319c;
  *puVar1 = &PTR_LAB_50c13198;
  if (DAT_50c214d0 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_50c214d0;
  }
  FUN_50c03107(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)puVar1,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


