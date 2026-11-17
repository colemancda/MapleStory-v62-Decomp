/* FUN_0065123a - 0x0065123a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char FUN_0065123a(void)

{
  undefined *puVar1;
  char cVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (**(short **)(unaff_EBP + 8) == 8) {
    puVar1 = *(undefined **)(*(short **)(unaff_EBP + 8) + 4);
  }
  else {
    puVar1 = &DAT_0097812c;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_00454081(puVar1,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006543b6();
  if ((*(char **)(unaff_EBP + 8) == (char *)0x0) ||
     (cVar2 = **(char **)(unaff_EBP + 8), cVar2 == '\0')) {
    cVar2 = *(char *)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return cVar2;
}


