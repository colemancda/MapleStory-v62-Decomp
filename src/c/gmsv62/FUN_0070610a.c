/* FUN_0070610a - 0x0070610a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


short * __thiscall FUN_0070610a(int param_1,short *param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  
  if (param_3 == 0) {
    psVar2 = *(short **)(param_1 + 0xc);
  }
  else {
    psVar2 = (short *)(-(uint)(*(int *)(param_3 + -0xc) != 0) & *(int *)(param_3 + -0xc) + 0x10U);
  }
  if (psVar2 != (short *)0x0) {
    do {
      if (*psVar2 == *param_2) {
        return psVar2;
      }
      iVar1 = *(int *)((-(uint)(psVar2 != (short *)0x0) & (uint)(psVar2 + -8)) + 4);
      psVar2 = (short *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    } while (psVar2 != (short *)0x0);
  }
  return (short *)0x0;
}


