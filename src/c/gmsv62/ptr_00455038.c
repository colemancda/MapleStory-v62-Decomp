/* ptr_00455038 - 0x00455038 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00455038(void)

{
  int *piVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00454a78();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00454939();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00454772();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined ***)(unaff_ESI + 0x508) = &PTR_FUN_008e908c;
  FUN_0045f705();
  piVar1 = *(int **)(unaff_ESI + 0x504);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00445a30();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0045f6a5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f42b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045f5d1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045f595();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065bb2f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


