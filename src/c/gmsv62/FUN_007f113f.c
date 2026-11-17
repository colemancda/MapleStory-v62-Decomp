/* FUN_007f113f - 0x007f113f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f113f(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar2 = DAT_00978138;
  puVar1 = (undefined4 *)(DAT_00978138 + 0x28);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(DAT_00978138 + 0x24);
  *(undefined4 *)(param_1 + 0x134) = *puVar1;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(iVar2 + 0x30);
  return;
}


