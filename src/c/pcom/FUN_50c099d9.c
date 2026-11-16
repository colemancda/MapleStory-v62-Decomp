/* FUN_50c099d9 - 0x50c099d9 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c099d9(int *param_1,undefined4 param_2,int param_3)

{
  size_t _Size;
  size_t *psVar1;
  undefined4 uVar2;
  void *unaff_retaddr;
  
  psVar1 = (size_t *)(*DAT_50c211e4)(*param_1 + -4,param_3 * 2 + 6);
  uVar2 = 0;
  if (psVar1 != (size_t *)0x0) {
    _Size = param_3 * 2;
    *psVar1 = _Size;
    psVar1 = psVar1 + 1;
    if (unaff_retaddr != (void *)0x0) {
      memcpy(psVar1,unaff_retaddr,_Size);
    }
    *(undefined2 *)(_Size + (int)psVar1) = 0;
    *param_1 = (int)psVar1;
    uVar2 = 1;
  }
  return uVar2;
}


