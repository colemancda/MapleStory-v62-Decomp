/* FUN_00875010 - 0x00875010 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00875010(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\x01') {
    cVar2 = param_1[1] * '\t';
    cVar1 = cVar2 + '\x03';
    param_1[2] = param_1[2] ^ param_1[1] * '\x03' + 0x65U;
    iVar5 = 0;
    bVar4 = param_1[3] ^ cVar2 + 0x68U;
    uVar3 = (uint)CONCAT11(param_1[2],bVar4);
    param_1[3] = bVar4;
    if (uVar3 != 0) {
      do {
        cVar1 = (cVar1 + '\x01') * '\x03';
        param_1[iVar5] = param_1[iVar5 + 4] ^ cVar1 + 0x65U;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
    }
    param_1[uVar3] = '\0';
  }
  return;
}


