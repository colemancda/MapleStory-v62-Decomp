/* FUN_00414f8b - 0x00414f8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00414f8b(int *param_1,int *param_2)

{
  LONG *lpAddend;
  int iVar1;
  LONG LVar2;
  LONG *pLVar3;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (iVar1 == 0) {
      pLVar3 = (LONG *)0x0;
    }
    else {
      pLVar3 = (LONG *)(iVar1 + -0xc);
    }
    if (pLVar3 == (LONG *)0x0) {
      if (*param_1 != 0) {
        pLVar3 = (LONG *)(*param_1 + -0xc);
        LVar2 = InterlockedDecrement(pLVar3);
        if (LVar2 < 1) {
          FUN_0041c438(pLVar3);
        }
        *param_1 = 0;
      }
    }
    else if (*pLVar3 == -1) {
      FUN_00414edd(iVar1,0xffffffff);
    }
    else {
      InterlockedIncrement(pLVar3);
      if (*param_1 != 0) {
        lpAddend = (LONG *)(*param_1 + -0xc);
        LVar2 = InterlockedDecrement(lpAddend);
        if (LVar2 < 1) {
          FUN_0041c438(lpAddend);
        }
      }
      *param_1 = (int)(pLVar3 + 3);
    }
  }
  return param_1;
}


