/* FUN_508040e7 - 0x508040e7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint __thiscall FUN_508040e7(void *this,undefined4 *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = *(ushort **)this;
  puVar2 = (ushort *)*param_1;
  if (puVar1 == (ushort *)0x0) {
    uVar7 = -(uint)(puVar2 != (ushort *)0x0);
  }
  else if (puVar2 == (ushort *)0x0) {
    uVar7 = 1;
  }
  else {
    if (puVar1 == (ushort *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(puVar1 + -2) >> 1;
    }
    if (puVar2 == (ushort *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(puVar2 + -2) >> 1;
    }
    uVar6 = uVar7;
    if (uVar5 < uVar7) {
      uVar6 = uVar5;
    }
    do {
      puVar4 = puVar2;
      puVar3 = puVar1;
      if (uVar6 == 0) {
        if (uVar7 < uVar5) {
          return 0xffffffff;
        }
        return (uint)(uVar7 != uVar5);
      }
      uVar6 = uVar6 - 1;
      puVar1 = puVar3 + 1;
      puVar2 = puVar4 + 1;
    } while (*puVar3 == *puVar4);
    uVar7 = (uint)*puVar3 - (uint)*puVar4;
  }
  return uVar7;
}


