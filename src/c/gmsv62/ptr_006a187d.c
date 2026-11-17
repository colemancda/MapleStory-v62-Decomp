/* ptr_006a187d - 0x006a187d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a187d(void)

{
  undefined4 in_EAX;
  DWORD DVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00414f8b(in_EAX);
  FUN_00414f8b(unaff_EBP + 0x10);
  *(int *)(unaff_ESI + 0x9c) = *(int *)(unaff_EBP + 0x14) * 2;
  *(int *)(unaff_ESI + 0xa0) = *(int *)(unaff_EBP + 0x18) * 2;
  DVar1 = timeGetTime();
  *(DWORD *)(unaff_ESI + 0xa4) = DVar1 + *(int *)(unaff_EBP + 0x1c);
  FUN_008161f1(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


