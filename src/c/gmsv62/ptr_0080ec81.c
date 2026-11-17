/* ptr_0080ec81 - 0x0080ec81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0080ec81(void)

{
  undefined4 in_EAX;
  int iVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*unaff_ESI + 0x2c))();
  FUN_00759767(iVar1 + *(int *)(unaff_EBP + 8),in_EAX);
  return 1;
}


