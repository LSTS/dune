function newstruct = select_id(oldstruct, ID)

index = 1;

newstruct.value = zeros(length(oldstruct.timestamp),1);
newstruct.timestamp = zeros(length(oldstruct.timestamp),1);

for i=1:length(oldstruct.timestamp)
    if (oldstruct.id(i) == ID)
        newstruct.timestamp(index) = oldstruct.timestamp(i);
        newstruct.value(index) = oldstruct.value(i);
        index = index + 1;
    end
end

newstruct.timestamp = newstruct.timestamp(1:index-1);
newstruct.value = newstruct.value(1:index-1);