/* FUN_5080236a - 0x5080236a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_5080236a(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = extraout_ECX + 1;
  *puVar1 = &PTR_LAB_508172ac;
  *extraout_ECX = &PTR_FUN_508172a8;
  *puVar1 = &PTR_LAB_508172a4;
  if (DAT_5081ebc0 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_5081ebc0;
  }
  FUN_508023c7(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)puVar1,uVar2,1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


