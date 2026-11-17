/* FUN_005e48d3 - 0x005e48d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005e48d3(undefined1 param_1,int param_2,int param_3,short *param_4,undefined2 param_5,
                 undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined1 param_9)

{
  undefined1 *_Dst;
  undefined2 uVar1;
  short sVar2;
  
  _Dst = (undefined1 *)FUN_005e5129();
  if (param_2 == 0) {
    if (param_4 == (short *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = -*param_4;
    }
  }
  else {
    sVar2 = (short)*(undefined4 *)(param_2 + 0x48);
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined2)*(undefined4 *)(param_3 + 0x48);
  }
  _memset(_Dst,0,0x14);
  *_Dst = param_1;
  *(undefined2 *)(_Dst + 2) = param_5;
  *(undefined2 *)(_Dst + 4) = param_6;
  *(undefined2 *)(_Dst + 6) = param_7;
  *(undefined2 *)(_Dst + 8) = param_8;
  *(short *)(_Dst + 0xc) = sVar2;
  *(undefined2 *)(_Dst + 0xe) = uVar1;
  _Dst[10] = param_9;
  return;
}


