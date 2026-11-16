/* FUN_5081083d - 0x5081083d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5081083d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[6] = &PTR_FUN_50818bec;
  FUN_508107ec((int)(extraout_ECX + 6));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_50818be8;
  *extraout_ECX = &PTR_LAB_508177bc;
  return;
}


