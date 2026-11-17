/* ptr_00520be8 - 0x00520be8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00520be8(void)

{
  undefined4 *unaff_ESI;
  void *in_stack_0000002c;
  undefined1 uStack00000034;
  
  uStack00000034 = 9;
  *unaff_ESI = &PTR_FUN_008eb068;
  unaff_ESI[1] = &PTR_FUN_008eb01c;
  unaff_ESI[2] = &PTR_FUN_008eb018;
  _OOBECompleteWnfWaitCallback_28(0x113);
  ExceptionList = in_stack_0000002c;
  return;
}


