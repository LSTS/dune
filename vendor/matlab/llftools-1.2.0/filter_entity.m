%+--------------------------------------------------------------------------+
%| Copyright (C) 2007-2015 Laboratório de Sistemas e Tecnologia Subaquática |
%| Departamento de Engenharia Electrotécnica e de Computadores              |
%| Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          |
%+--------------------------------------------------------------------------+
%| Author: Ricardo Martins                                                  |
%+--------------------------------------------------------------------------+
%| $Id:: filter_entity.m 479 2012-01-31 08:02:13Z rasm                    $:|
%+--------------------------------------------------------------------------+
%
% FILTER_ENTITY(ENTITY_INFO, ENTITY_LABEL, STRUCT) filters the
%   elements of a of structure STRUCT whose source entity id maps
%   to the given ENTITY_LABEL. The mapping between entity label
%   and entity id is given by the structure ENTITY_INFO.
%
% Example:
%   filter_entity(EntityInfo, 'MCRT (+5V)', Voltage)
%

function return_struct = filter_entity(entity_info, entity_label, struct)

  % Find the source entity id for the given entity_label.
  src_ent = -1;
  for i=1:size(entity_info.timestamp),
    if strcmp(entity_info.label(i), entity_label)
      src_ent = entity_info.id(i);
      break
    end
  end

  if src_ent == -1
    error('Unable to find entity id for entity label ''%s''', entity_label);
  end

  % Pre-allocate return_struct to avoid the penalty of enlarging it
  % successively.
  return_struct = struct;

  % Filter original structure.
  fields = fieldnames(struct);
  idx = 0;
  for i=1:size(struct.timestamp),
    if struct.src_ent(i) == src_ent
      idx = idx + 1;
      for h=1:length(fields)
        return_struct.(fields{h})(idx) = struct.(fields{h})(i);
      end
    end
  end

  % Truncate return_struct to the right size.
  for i=1:length(fields)
    return_struct.(fields{i}) = return_struct.(fields{i})(1:idx);
  end
