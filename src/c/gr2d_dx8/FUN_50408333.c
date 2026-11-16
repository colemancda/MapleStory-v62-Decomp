/* FUN_50408333 - 0x50408333 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl FUN_50408333(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  div_t dVar4;
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0xffffffff;
  local_c = (undefined1 *)0x0;
  puVar1 = param_1 + param_5;
  puVar2 = param_1 + param_4;
  if (param_3 < param_4) {
    local_c = param_1 + param_3 + (param_3 == 0) + 1;
    puVar3 = puVar2 + (param_3 == 0) + 1;
  }
  else {
    puVar3 = puVar2;
    if (param_4 < param_3) {
      puVar3 = param_1 + param_3;
      local_8 = puVar2;
    }
  }
  puVar2 = puVar1;
  if (puVar3 < puVar1) {
    puVar2 = puVar3;
  }
  *puVar2 = 0;
  for (; param_1 < puVar3; puVar3 = puVar3 + -1) {
    if (local_8 < puVar3) {
      puVar3[-1] = 0x30;
    }
    else if (puVar3 == local_c) {
      puVar3[-1] = 0x2e;
    }
    else {
      dVar4 = div(param_2,10);
      param_2 = dVar4.quot;
      if (puVar3 <= puVar1) {
        puVar3[-1] = (char)dVar4.rem + '0';
      }
    }
  }
  if (param_3 == 0) {
    *puVar3 = 0x30;
  }
  return;
}


