/* FUN_0043f124 - 0x0043f124 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043f124(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  puVar1 = (undefined4 *)(param_1 + 0x19);
  param_2 = param_2 - param_1;
  iVar2 = 0x31;
  do {
    *puVar1 = *(undefined4 *)(param_2 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0xdd);
  iVar2 = 0x31;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + param_2);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x1a1);
  iVar2 = 3;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + param_2);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


