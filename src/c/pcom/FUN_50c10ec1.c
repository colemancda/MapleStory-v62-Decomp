/* FUN_50c10ec1 - 0x50c10ec1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


short * __cdecl FUN_50c10ec1(short *param_1)

{
  int iVar1;
  short *psVar2;
  short *_Src;
  
  _Src = param_1;
  if (param_1 != (short *)0x0) {
    for (; (*_Src == 0x20 || (*_Src == 9)); _Src = _Src + 1) {
    }
    if (*_Src != 0) {
      for (psVar2 = (short *)((int)param_1 + ((*(uint *)(param_1 + -2) & 0xfffffffe) - 2));
          (*psVar2 == 0x20 || (*psVar2 == 9)); psVar2 = psVar2 + -1) {
      }
      iVar1 = ((int)psVar2 - (int)_Src >> 1) + 1;
      memmove(param_1,_Src,iVar1 * 2);
      FUN_50c099d9((int *)&param_1,0,iVar1);
      return param_1;
    }
    (*DAT_50c211e8)(param_1 + -2);
  }
  return (short *)0x0;
}


