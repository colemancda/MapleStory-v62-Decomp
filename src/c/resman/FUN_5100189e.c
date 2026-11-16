/* FUN_5100189e - 0x5100189e in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_5100189e(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar1;
  
  FUN_51005950();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(extraout_ECX + 0x6c) = &PTR_FUN_51006104;
  FUN_51001cf0(extraout_ECX + 0x6c);
  puVar1 = (undefined4 *)(extraout_ECX + 0x58);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *puVar1 = &PTR_FUN_5100613c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_51001cae((int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_51001c50((int *)(extraout_ECX + 0x68));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(extraout_ECX + 0x34) = &PTR_FUN_51006108;
  FUN_51001cf0(extraout_ECX + 0x34);
  puVar1 = (undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *puVar1 = &PTR_FUN_5100613c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_51001cae((int)puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_51001c50((int *)(extraout_ECX + 0x30));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


