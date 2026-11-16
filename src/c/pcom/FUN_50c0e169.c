/* FUN_50c0e169 - 0x50c0e169 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c0e169(undefined2 *param_1,int param_2)

{
  wchar_t *pwVar1;
  int *piVar2;
  
  *param_1 = 8;
  if ((undefined4 *)**(int **)(param_2 + 4) == (undefined4 *)0x0) {
    pwVar1 = (wchar_t *)0x0;
  }
  else {
    pwVar1 = *(wchar_t **)**(int **)(param_2 + 4);
  }
  piVar2 = FUN_50c05fda(pwVar1);
  *(int **)(param_1 + 4) = piVar2;
  return (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


