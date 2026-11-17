/* FUN_00882b4a - 0x00882b4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00882b4a(undefined4 param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_0087d9ec(0x19);
  CodePage = FUN_00882cf7(param_1);
  if (CodePage != DAT_0098200c) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_009725f8;
LAB_00882b87:
      if (*pUVar5 != CodePage) goto code_r0x00882b8b;
      local_8 = 0;
      puVar15 = &DAT_00982120;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x972608);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_009725f0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_00982120 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_0098201c = 1;
      DAT_0098200c = CodePage;
      DAT_00982224 = FUN_00882d41(CodePage);
      DAT_00982010 = *(undefined4 *)(iVar12 + 0x9725fc);
      DAT_00982014 = *(undefined4 *)(iVar12 + 0x972600);
      DAT_00982018 = *(undefined4 *)(iVar12 + 0x972604);
      goto LAB_00882cdb;
    }
    goto LAB_00882cd6;
  }
  goto LAB_00882b71;
code_r0x00882b8b:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x9726e7 < pUVar5) goto code_r0x00882b96;
  goto LAB_00882b87;
code_r0x00882b96:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_00982224 = 0;
    puVar15 = &DAT_00982120;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_0098201c = 0;
      DAT_0098200c = CodePage;
    }
    else {
      DAT_0098200c = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_00982120 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_00982120 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_00982224 = FUN_00882d41(CodePage);
      DAT_0098201c = 1;
    }
    DAT_00982010 = 0;
    DAT_00982014 = 0;
    DAT_00982018 = 0;
  }
  else {
    if (DAT_00980780 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_00882ce8;
    }
LAB_00882cd6:
    FUN_00882d74();
  }
LAB_00882cdb:
  FUN_00882d9d();
LAB_00882b71:
  uVar14 = 0;
LAB_00882ce8:
  FUN_0087da4d(0x19);
  return uVar14;
}


