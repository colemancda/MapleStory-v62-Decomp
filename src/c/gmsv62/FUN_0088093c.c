/* FUN_0088093c - 0x0088093c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0088093c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_0098223c == DAT_00982228) {
    pvVar2 = HeapReAlloc(DAT_00982248,0,DAT_00982240,(DAT_00982228 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00982228 = DAT_00982228 + 0x10;
    DAT_00982240 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00982240 + DAT_0098223c * 0x14);
  pvVar2 = HeapAlloc(DAT_00982248,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_0098223c = DAT_0098223c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00982248,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


