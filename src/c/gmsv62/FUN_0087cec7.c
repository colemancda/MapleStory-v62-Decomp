/* FUN_0087cec7 - 0x0087cec7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte * FUN_0087cec7(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  
  FUN_0087d9ec(0x19);
  pbVar2 = param_1;
  bVar4 = *param_1;
  pbVar5 = param_1;
  do {
    if (bVar4 == 0) {
      FUN_0087da4d(0x19);
      return pbVar2;
    }
    bVar4 = *pbVar5;
    bVar1 = *(byte *)((int)&DAT_00982120 + bVar4 + 1);
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 0x10) == 0x10) {
        bVar4 = (&DAT_00982020)[bVar4];
      }
      *pbVar5 = bVar4;
    }
    else {
      iVar3 = FUN_0088304e(DAT_00982224,0x100,pbVar5,2,&param_1,2,DAT_0098200c,1);
      if (iVar3 == 0) {
        FUN_0087da4d(0x19);
        return (byte *)0x0;
      }
      *pbVar5 = (byte)param_1;
      if (1 < iVar3) {
        pbVar5 = pbVar5 + 1;
        *pbVar5 = (byte)((uint)param_1 >> 8);
      }
    }
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar5;
  } while( true );
}


